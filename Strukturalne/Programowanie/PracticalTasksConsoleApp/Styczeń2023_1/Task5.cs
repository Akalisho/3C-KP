
namespace PracticalTasksConsoleApp.Styczeń2023_1
{
    internal class Task5
    {
        public void Task()
        {
            Notatka n1 = new Notatka("Zakupy", "Kupić mleko, chleb i masło");
            n1.WyswietlNotatke();
            n1.Diagnostyka();

            Console.WriteLine();

            Notatka n2 = new Notatka("Plan dnia", "Nauka, trening, odpoczynek");
            n2.WyswietlNotatke();
            n2.Diagnostyka();
        }
    }

    internal class Notatka
    {
        private static int licznikNotatek = 0;
        private int id;
        private string tytul;
        private string tresc;

        public Notatka(string tytul, string tresc)
        {
            licznikNotatek++;
            this.id = licznikNotatek;
            this.tytul = tytul;
            this.tresc = tresc;
        }

        public void WyswietlNotatke()
        {
            Console.WriteLine($"Tytuł: {tytul}\nTreść: {tresc}");
        }

        public void Diagnostyka()
        {
            Console.WriteLine($"ID: {id}; Licznik: {licznikNotatek}; Tytuł: {tytul}; Treść: {tresc}");
        }
    }
}
