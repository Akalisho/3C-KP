
namespace PracticalTasksConsoleApp.Styczeń2023_1
{
    internal class Task5
    {
        public void Task()
        {
            // Utworzenie dwóch notatek i test działania
            Notatka n1 = new Notatka("Zakupy", "Kupić mleko, chleb i masło");
            Notatka n2 = new Notatka("Plan dnia", "Nauka, trening, odpoczynek");

            Console.WriteLine("Wyświetlenie notatek:\n");
            n1.WyswietlNotatke();
            n2.WyswietlNotatke();

            Console.WriteLine("\nDiagnostyka wszystkich pól:\n");
            n1.Diagnostyka();
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
            Console.WriteLine($"Tytuł: {tytul}\nTreść: {tresc}\n");
        }

        public void Diagnostyka()
        {
            Console.WriteLine($"ID: {id}; Licznik: {licznikNotatek}; Tytuł: {tytul}; Treść: {tresc}");
        }
    }
}
