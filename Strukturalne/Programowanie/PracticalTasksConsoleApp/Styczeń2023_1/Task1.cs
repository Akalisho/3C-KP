
namespace PracticalTasksConsoleApp.Styczeń2023_1;

internal class Task1
{
    public void Task()
    {
        int a, b;
        Console.WriteLine("Podaj a:");
        a = int.Parse(Console.ReadLine());
        if (a < 0)
        {
            a = a * (-1);
        }
        Console.WriteLine("Podaj b:");
        b = int.Parse(Console.ReadLine());
        if (b < 0)
        {
            b = b * (-1);
        }
        a = SzukajNWD(a, b);
        Console.WriteLine("NWD podanych liczb: " + a);
    }

    /*
    * nazwa funkcji: SzukajNWD
    * opis funkcji: Wyszukuje NWD dwóch podanych liczb: a i b, po czym zwraca jego wartość
    * parametry:  a - pierwsza podana liczba całkowita dodatnia
    *             b - druga podana liczba całkowita dodatnia
    * zwracany typ i opis: typ: int ,zmienna a (pierwsza podana liczba przez użytkownika, 
    *                           zwrócona jako NWD wykonanej funkcji)
    * autor: 01234567890
    */
    private int SzukajNWD(int a, int b)
    {
        while (a != b)
        {
            if (a > b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        return a;
    }
}