
namespace PracticalTasksConsoleApp.Styczeń2025_1;

internal class Task4
{
    class Urzadzenie
    {
        public void Komunikat(string tresc)
        {
            Console.WriteLine(tresc);
        }
    }

    class Pralka : Urzadzenie
    {
        private int numerProgramu = 0;

        public void UstawProgram(int numer)
        {
            if (numer >= 1 && numer <= 12)
            {
                numerProgramu = numer;
                Komunikat("Program został ustawiony");
            }
            else
            {
                numerProgramu = 0;
                Komunikat("Podano niepoprawny numer programu");
            }
        }
    }

    class Odkurzacz : Urzadzenie
    {
        private bool wlaczony = false;

        public void On()
        {
            if (!wlaczony)
            {
                wlaczony = true;
                Komunikat("Odkurzacz włączono");
            }
        }

        public void Off()
        {
            if (wlaczony)
            {
                wlaczony = false;
                Komunikat("Odkurzacz wyłączono");
            }
        }
    }

    public void Task()
    {
        Pralka pralka = new Pralka();
        Odkurzacz odkurzacz = new Odkurzacz();

        Console.Write("Podaj numer prania 1..12: ");
        string input = Console.ReadLine();
        if (int.TryParse(input, out int numer))
            pralka.UstawProgram(numer);
        else
            Console.WriteLine("Niepoprawne dane!");

        odkurzacz.On();
        odkurzacz.On();
        odkurzacz.On();
        pralka.Komunikat("Odkurzacz wyładował się");
        odkurzacz.Off();
    }
}
