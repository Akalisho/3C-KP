
#include <iostream>

using namespace std;

//Napisz program, który wczyta, np. 5 liczb, a nastêpnie je wyœwietli w odwrotnej kolejnoœci.
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    //std::cin >> ARRAY_SIZE; //Jest b³¹d, sta³a nie mo¿e byæ u¿yta w cin, bo to dla zmiennych.
    int numbers[ARRAY_SIZE];
    //numbers[2] = 70;

    /*
    cout << "Podaj dan¹:\n";
    cin >> numbers[0];
    cout << "Podaj dan¹:\n";
    cin >> numbers[1];
    cout << "Podaj dan¹:\n";
    cin >> numbers[2];
    cout << "Podaj dan¹:\n";
    cin >> numbers[3];
    cout << "Podaj dan¹:\n";
    cin >> numbers[4];
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

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}
