using System;
using System.Collections.Generic;
using ProstaListaZadan.Models;
using ProstaListaZadan.Services;
/*
 Dodać nugety pakiet*/

namespace ProstaListaZadan;

public partial class MainPage : ContentPage
{
    private DatabaseHelper bazaDanych;
    private List<TaskItem> zadania;
    private List<TaskItem> usunieteZadania;

    public MainPage()
    {
        InitializeComponent();

        bazaDanych = new DatabaseHelper();

        ZaladujZadania();
    }
    protected override void OnAppearing()
    {
        base.OnAppearing();
        ZaladujZadania();
    }
    private async void ZaladujZadania()
    {
        zadania = await bazaDanych.PobierzZadania();
        usunieteZadania = await bazaDanych.PobierzUsunieteZadania();

        WyswietlZadania();
        WyswietlUsunieteZadania();
    }

    private void WyswietlZadania()
    {
        ListaZadan.Clear();

        if (zadania.Count == 0)
        {
            LabelBrakZadan.IsVisible = true;
            ListaZadan.Add(LabelBrakZadan);
        }
        else
        {
            LabelBrakZadan.IsVisible = false;

            foreach (var zadanie in zadania)
            {
                var grid = new Grid
                {
                    ColumnDefinitions =
                        {
                        new ColumnDefinition { Width = new GridLength(1, GridUnitType.Star) },
                        new ColumnDefinition { Width = GridLength.Auto },
                        new ColumnDefinition { Width = GridLength.Auto }
                        },
                    Padding = new Thickness(5)
                };

                var label = new Label
                {
                    Text = zadanie.Nazwa,
                    FontSize = 16,
                    VerticalOptions = LayoutOptions.Center
                };

                if (zadanie.CzyWykonane)
                {
                    label.TextDecorations = TextDecorations.Strikethrough;
                }

                var checkbox = new CheckBox
                {
                    IsChecked = zadanie.CzyWykonane,
                    VerticalOptions = LayoutOptions.Center
                };

                int zadanieId = zadanie.Id;
                checkbox.CheckedChanged += async (sender, e) =>
                {
                    await bazaDanych.ZmienStatusZadania(zadanieId, e.Value);
                    ZaladujZadania();
                };

                var przyciskUsun = new Button
                {
                    Text = "Usuń",
                    BackgroundColor = Colors.Red,
                    TextColor = Colors.White,
                    FontSize = 14,
                    VerticalOptions = LayoutOptions.Center,
                    Margin = new Thickness(5, 0, 0, 0)
                };

                przyciskUsun.Clicked += async (sender, e) =>
                {
                    await bazaDanych.UsunZadanie(zadanieId);
                    ZaladujZadania();
                };

                grid.Add(label, 0, 0);
                grid.Add(checkbox, 1, 0);
                grid.Add(przyciskUsun, 2, 0);

                ListaZadan.Add(grid);
            }
        }
    }
    private void WyswietlUsunieteZadania()
    {
        ListaUsunietychZadan.Clear();

        if (usunieteZadania.Count == 0)
        {
            LabelBrakUsunietych.IsVisible = true;
            ListaUsunietychZadan.Add(LabelBrakUsunietych);
        }
        else
        {
            LabelBrakUsunietych.IsVisible = false;

            foreach (var zadanie in usunieteZadania)
            {
                var grid = new Grid
                {
                    ColumnDefinitions =
                        {
                        new ColumnDefinition { Width = new GridLength(1, GridUnitType.Star) },
                        new ColumnDefinition { Width = GridLength.Auto }
                        },
                    Padding = new Thickness(5)
                };

                var label = new Label
                {
                    Text = zadanie.Nazwa,
                    FontSize = 16,
                    TextColor = Colors.Gray,
                    VerticalOptions = LayoutOptions.Center
                };

                var przyciskPrzywroc = new Button
                {
                    Text = "Przywróć",
                    BackgroundColor = Colors.Green,
                    TextColor = Colors.White,
                    FontSize = 14,
                    VerticalOptions = LayoutOptions.Center,
                    Margin = new Thickness(5, 0, 0, 0)
                };

                int zadanieId = zadanie.Id;
                przyciskPrzywroc.Clicked += async (sender, e) =>
                {
                    await bazaDanych.PrzywrocZadanie(zadanieId);
                    ZaladujZadania();
                };

                grid.Add(label, 0, 0);
                grid.Add(przyciskPrzywroc, 1, 0);

                ListaUsunietychZadan.Add(grid);
            }
        }
    }
    private async void PrzyciskDodaj_Clicked(object sender, EventArgs e)
    {
        string noweZadanie = EntryNoweZadanie.Text?.Trim();
        if (!string.IsNullOrEmpty(noweZadanie))
        {
            await bazaDanych.DodajZadanie(noweZadanie);

            EntryNoweZadanie.Text = string.Empty;

            ZaladujZadania();
        }
        else
        {
            await DisplayAlert("Uwaga", "Nazwa zadania nie może być pusta.", "OK");
        }
    }
}

