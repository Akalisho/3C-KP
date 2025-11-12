
namespace PracticalTasksConsoleApp.Czerwiec2023_6;

internal class Task3
{
    public void Task()
    {
        Film film = new Film();

        Console.WriteLine("Wartości początkowe obiektu:");
        Console.WriteLine($"Tytuł: {film.GetTytul()}");
        Console.WriteLine($"Liczba wypożyczeń: {film.GetLiczbaWypozyczen()}");

        film.SetTytul("Incepcja");

        Console.WriteLine("\nPo ustawieniu tytułu:");
        Console.WriteLine($"Tytuł: {film.GetTytul()}");

        film.InkrementujWypozyczenia();
        film.InkrementujWypozyczenia();

        Console.WriteLine("\nPo dwukrotnym wywołaniu metody inkrementującej:");
        Console.WriteLine($"Liczba wypożyczeń: {film.GetLiczbaWypozyczen()}");
    }
}

/*
* nazwa klasy: Film
* pola: tytul - przechowuje tytul typu statycznego string
*       liczbaWypozyczen - przechowuje liczbę wypożyczeń wprowadzonego filmu
* metody:   SetTytul, nic nie zwraca - nadpisuje wprowadzony nowy tytul na pole klasy tytul jeżeli on jest mniejszy bądź równy 20,
*           w przeciwnym razie wyświetla komunikat "Tytuł nie może przekraczać 20 znaków!"
*           GetTytul, zwraca tytul - zwraca wartość z pola tytul
*           GetLiczbaWypozyczen, zwraca liczbę wypożyczeń - zwraca wartość z pola liczbaWypozyczen
*           InkrementujWypozyczenia, nic nie zwraca - inkrementuje o 1 wartość pola liczbaWypozyczen
* informacje: Klasa ma za zadanie utworzenia części logiki systemu wirtualnej wypożyczalni filmów.
*             Zawiera metody get i set oraz inkrementującą liczbę wypożyczeń wprowadzonego filmu. 
* autor: 01234567890
*/
internal class Film
{
    protected string tytul;
    protected int liczbaWypozyczen;

    public Film()
    {
        tytul = "";
        liczbaWypozyczen = 0;
    }

    public void SetTytul(string nowyTytul)
    {
        if (nowyTytul.Length <= 20)
            tytul = nowyTytul;
        else
            Console.WriteLine("Tytuł nie może przekraczać 20 znaków!");
    }

    public string GetTytul()
    {
        return tytul;
    }

    public int GetLiczbaWypozyczen()
    {
        return liczbaWypozyczen;
    }

    public void InkrementujWypozyczenia()
    {
        liczbaWypozyczen++;
    }
}
