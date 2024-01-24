
#include <iostream>

using namespace std;

//Napisz program, który wczyta, np. 5 liczb, a nastêpnie je wyœwietli w odwrotnej kolejnoœci.
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    //std::cin >> ARRAY_SIZE; //Jest b³¹d, sta³a nie mo¿e byæ u¿yta w cin, bo to dla zmiennych.
    int numbers[ARRAY_SIZE];
    //numbers1[2] = 70;

    /*
    cout << "Podaj dan¹:\n";
    cin >> numbers1[0];
    cout << "Podaj dan¹:\n";
    cin >> numbers1[1];
    cout << "Podaj dan¹:\n";
    cin >> numbers1[2];
    cout << "Podaj dan¹:\n";
    cin >> numbers1[3];
    cout << "Podaj dan¹:\n";
    cin >> numbers1[4];
    */

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Podaj dan¹:\n";
        cin >> numbers[i];
    }

    cout << "Podane dane w odwrotnej kolejnoœci:\n";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
    {
        cout << numbers[i] << ", ";
    }
    cout << "\n";
}

void task2()
{
    //<LOWER_RANGE; UPPER_RANGE>, przy za³o¿eniu, ¿e UPPER_RANGE <= LOWER_RANGE
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;
    const unsigned ARRAY_SIZE = 3;
    int numbers[ARRAY_SIZE] = {};
    srand(time(0));
    cout << "Wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        cout << numbers[i] << ", ";
    }
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }
    double avg = sum * 1.0 / ARRAY_SIZE;
    cout << "Œrednia wynosi: " << avg << "\n";
}

//Napisz program, który uzupe³ni tablicê liczbami losowymi, a  nastêpnie znajdzie minimum i maksimum.

void task3() 
{
    const unsigned short LOWER_RANGE = 0;
    const unsigned short UPPER_RANGE = 100;
    const unsigned ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = {};
    srand(time(0));
    cout << "Wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        cout << numbers[i] << ", ";
    }
    cout << "\n";

    //---------------------------------------------------------------------------

    int max = numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    cout << "Max to: " << max << "\n";

    int min = numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    cout << "Min to: " << min << "\n";
}

//Napisz program, który wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu.

void task4()
{
    const long long UPPER_RANGE = 70;

    //wersja 1

    for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
    {
        bool isPrime = true;
        for (long long i = 2; i <= numberToCheck; i++)
        {
            if (numberToCheck % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime /*== true*/)
            cout << numberToCheck << "\n";
    }
    cout << "Gotowe\n";

    //wersja 2

    bool sieveOfEratosthenes[UPPER_RANGE + 1];

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        sieveOfEratosthenes[i] = true;
    }

    for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
    {
        if (sieveOfEratosthenes[number] /*== true*/)
        {
            for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
                sieveOfEratosthenes[numberToCrossOut] = false;
        }
    }

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        if (sieveOfEratosthenes[i] /*== true*/)
            std::cout << i << ", ";
    }
    std::cout << "\n";
}

//Napisz program, który wczyta numer dnia tygodnia, a nastêpnie wyœwietli nazwê tego dnia.

void task5()
{
    int numberOfWeek;
    cout << "Podaj numer dnia tygodnia:\n";
    cin >> numberOfWeek;

    std::string dayNames[] = { "Poniedzia³ek", "Wtorek", "Œroda", "Czwartek", "Pi¹tek", "Sobota", "Niedziela" };
    //dayNames[0] = "Poniedzia³ek";
    //dayNames[1] = "Wtorek";
    //kontynuacja dni

    if (numberOfWeek >= 0 && numberOfWeek <= 6)
        cout << "Ten dzieñ to: " << dayNames[numberOfWeek] << "\n";
    else
        cout << "Niepoprawny dzieñ.\n";
}

//Napisz program, który posortuje tablice liczb.

void task6()
{
    const unsigned short LOWER_RANGE = 0;
    const unsigned short UPPER_RANGE = 70;
    const unsigned ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = {};

    srand(time(0));

    cout << "Wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        cout << numbers[i] << ", ";
    }
    cout << "\n";

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j > ARRAY_SIZE; j++)
        {
            if (numbers[j] < numbers[minIndex])
                minIndex = j;
        }

        int tmp = numbers[minIndex];
        numbers[minIndex] = numbers[i];
        numbers[i] = tmp;
    }
    cout << "Posortowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << numbers[i] << ", ";
    }
    cout << "\n";
}

//Napisz program, który posortuje tablice liczb sposobem przez wstawianie.

void task7()
{
    const unsigned short LOWER_RANGE = 0;
    const unsigned short UPPER_RANGE = 70;
    const unsigned ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = {};

    srand(time(0));

    cout << "Wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    { 
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        cout << numbers[i] << ", ";
    }
    cout << "\n";

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        int pom = numbers[i];

        int j;
        for (j = i - 1; j >= 0 && numbers[j] > pom; j--)
        {
            numbers[j + 1] = numbers[j];
        }
        numbers[j + 1] = pom;
    }

    cout << "Posortowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << numbers[i] << ", ";
    }
    cout << "\n";
}

//Napisz program, który posortuje tablice liczb sposobem b¹belkowym.

void task8()
{
    const unsigned short LOWER_RANGE = 0;
    const unsigned short UPPER_RANGE = 70;
    const unsigned ARRAY_SIZE = 10;
    int numbers1[ARRAY_SIZE] = {};

    srand(time(0));

    cout << "Wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers1[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        cout << numbers1[i] << ", ";
    }
    cout << "\n";

    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for (int j = 0; j < ARRAY_SIZE - 1 - i; j++)
        {   
            if (numbers1[j] > numbers1[j + 1])
            {
                int tmp = numbers1[j];
                numbers1[j] = numbers1[j + 1];
                numbers1[j + 1] = tmp;
            }
        }
    }

    cout << "Posortowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << numbers1[i] << ", ";
    }
    cout << "\n";
}



int main()
{
    setlocale(LC_CTYPE, "polish");
    task8();
}
