
namespace PracticalTasksConsoleApp.Czerwiec2022_6;

internal class Osoba
{
    private int id = 0;
    private string imie;
    private static int licznik = 0;
    public Osoba()
    {
        this.id = 0;
        this.imie = "";
        licznik++;
    }

    public Osoba(int id, string imie)
    {
        this.id = id;
        this.imie = imie;
        licznik++;
    }

    public Osoba(Osoba innaOsoba)
    {
        this.id = innaOsoba.id;
        this.imie = innaOsoba.imie;
        licznik++;
    }

    public void Wypisz(string argument)
    {
        if (string.IsNullOrEmpty(imie))
        {
            Console.WriteLine("brak danych");
        }
        else
        {
            Console.WriteLine($"Cześć {argument}, mam na imie {imie}");
        }
    }

    public static void PokazLicznik()
    {
        Console.WriteLine($"Liczba utworzonych obiektow {licznik}");
    }
}

/*
* nazwa funkcji: Wypisz
* opis funkcji: Wypisuje nazwę podaną w zmiennej argument i imie ,w przypadku gdy imie bedzie puste wypisze brak danych  
* parametry:  argument - imie podane przez użytkownika do wyświetlenia w funkcji
* zwracany typ i opis: typ: string
* autor: 01234567890
*/

internal class Task2
{
    public void Task()
    {
        Osoba o1 = new Osoba();
        Osoba o2 = new Osoba(1 , "Jan");
        Osoba o3 = new Osoba(o2);

        o1.Wypisz("Tomek");
        o2.Wypisz("Kasia");
        o3.Wypisz("Marek");

        Osoba.PokazLicznik();
    }
}   
