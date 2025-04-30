using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MySqlConnector;
using ProstaListaZadan.Models;

namespace ProstaListaZadan.Services
{
    public class DatabaseHelper
    {
        private string connectionString = "Server=localhost;Database=zadania_db;Uid=root;Pwd=haslo;";
        public async Task<List<TaskItem>> PobierzZadania()
        {
            List<TaskItem> listaZadan = new List<TaskItem>();

            using (MySqlConnection polaczenie = new MySqlConnection(connectionString))
            {
                try
                {
                    await polaczenie.OpenAsync();

                    string zapytanie = "SELECT * FROM zadania WHERE CzyUsuniete = 0 ORDER BY DataUtworzenia DESC";
                    MySqlCommand komenda = new MySqlCommand(zapytanie, polaczenie);

                    using (var czytnik = await komenda.ExecuteReaderAsync())
                    {
                        while (await czytnik.ReadAsync())
                        {
                            listaZadan.Add(new TaskItem
                            {
                                Id = czytnik.GetInt32("Id"),
                                Nazwa = czytnik.GetString("Nazwa"),
                                CzyWykonane = czytnik.GetBoolean("CzyWykonane"),
                                CzyUsuniete = false,
                                DataUtworzenia = czytnik.GetDateTime("DataUtworzenia")
                            });
                        }
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Błąd podczas pobierania zadań: " + ex.Message);
                }
            }

            return listaZadan;
        }
        public async Task<List<TaskItem>> PobierzUsunieteZadania()
        {
            List<TaskItem> listaUsunietych = new List<TaskItem>();

            using (MySqlConnection polaczenie = new MySqlConnection(connectionString))
            {
                try
                {
                    await polaczenie.OpenAsync();

                    string zapytanie = "SELECT * FROM zadania WHERE CzyUsuniete = 1 ORDER BY DataUtworzenia DESC";
                    MySqlCommand komenda = new MySqlCommand(zapytanie, polaczenie);

                    using (var czytnik = await komenda.ExecuteReaderAsync())
                    {
                        while (await czytnik.ReadAsync())
                        {
                            listaUsunietych.Add(new TaskItem
                            {
                                Id = czytnik.GetInt32("Id"),
                                Nazwa = czytnik.GetString("Nazwa"),
                                CzyWykonane = czytnik.GetBoolean("CzyWykonane"),
                                CzyUsuniete = true,
                                DataUtworzenia = czytnik.GetDateTime("DataUtworzenia")
                            });
                        }
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Błąd podczas pobierania usuniętych zadań: " + ex.Message);
                }
            }

            return listaUsunietych;
        }
        public async Task DodajZadanie(string nazwa)
        {
            using (MySqlConnection polaczenie = new MySqlConnection(connectionString))
            {
                try
                {
                    await polaczenie.OpenAsync();

                    string zapytanie = "INSERT INTO zadania (Nazwa, CzyWykonane, CzyUsuniete, DataUtworzenia) VALUES (@nazwa, 0, 0, @data)";
                    MySqlCommand komenda = new MySqlCommand(zapytanie, polaczenie);
                    komenda.Parameters.AddWithValue("@nazwa", nazwa);
                    komenda.Parameters.AddWithValue("@data", DateTime.Now);

                    await komenda.ExecuteNonQueryAsync();
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Błąd podczas dodawania zadania: " + ex.Message);
                }
            }
        }
        public async Task ZmienStatusZadania(int id, bool czyWykonane)
        {
            using (MySqlConnection polaczenie = new MySqlConnection(connectionString))
            {
                try
                {
                    await polaczenie.OpenAsync();

                    string zapytanie = "UPDATE zadania SET CzyWykonane = @status WHERE Id = @id";
                    MySqlCommand komenda = new MySqlCommand(zapytanie, polaczenie);
                    komenda.Parameters.AddWithValue("@status", czyWykonane);
                    komenda.Parameters.AddWithValue("@id", id);

                    await komenda.ExecuteNonQueryAsync();
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Błąd podczas zmiany statusu zadania: " + ex.Message);
                }
            }
        }
        public async Task UsunZadanie(int id)
        {
            using (MySqlConnection polaczenie = new MySqlConnection(connectionString))
            {
                try
                {
                    await polaczenie.OpenAsync();

                    string zapytanie = "UPDATE zadania SET CzyUsuniete = 1 WHERE Id = @id";
                    MySqlCommand komenda = new MySqlCommand(zapytanie, polaczenie);
                    komenda.Parameters.AddWithValue("@id", id);

                    await komenda.ExecuteNonQueryAsync();
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Błąd podczas usuwania zadania: " + ex.Message);
                }
            }
        }
        public async Task PrzywrocZadanie(int id)
        {
            using (MySqlConnection polaczenie = new MySqlConnection(connectionString))
            {
                try
                {
                    await polaczenie.OpenAsync();

                    string zapytanie = "UPDATE zadania SET CzyUsuniete = 0 WHERE Id = @id";
                    MySqlCommand komenda = new MySqlCommand(zapytanie, polaczenie);
                    komenda.Parameters.AddWithValue("@id", id);

                    await komenda.ExecuteNonQueryAsync();
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Błąd podczas przywracania zadania: " + ex.Message);
                }
            }
        }
    }
}