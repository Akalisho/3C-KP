
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
