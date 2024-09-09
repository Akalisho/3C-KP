
#include <iostream>

using namespace std;

/*
Funkcja:
- zbiór instrukcji realizuj¹cych zadanie.
- podprogram.

Budowa funkcji:
- nag³ówek funkcji
- cia³o funkcji - instrukcje ograniczone nawiasami klamrowymi

Nag³ówek
    typ_zwracanej_danej nazwa_zmiennej(parametry)
*/

void task1()
{
    cout << "Hello World!\n";
}

//Napisz funkcjê uniwersaln¹, aby wyœwietliæ dowolny tekst.
void task2(string textParam)
{
    cout << textParam << "\n";
}

//Napisz funkcjê uniwersaln¹, która wyœwietli imiê oraz informacjê czy ktoœ jest pe³noletni czy nie.
void task3(string name, int age)
{
    if (age >= 18)
        cout << name << " jest pe³noletni/pe³noletnia.\n";
    else
        cout << name << " jest niepe³noletni/niepe³noletnia.\n";
}

//Napisz program, który przetestuje zachowanie siê przekazywanych danych przez parametr.
void task4(int number)
{
    cout << "Zmienna number w funkcji task4: " << number << "\n";
    number--;
    cout << "Zmienna number w funkcji task4: " << number << "\n";
}

void task5(int &number)
{
    cout << "Zmienna number w funkcji task4: " << number << "\n";
    number--;
    cout << "Zmienna number w funkcji task4: " << number << "\n";
}

//Napisz program, który pobierze od u¿ytkownika liczbê.
void task6_GetNumber(int &number)//void nie wypuszcza wartoœci
{
    cout << "Podaj liczbê:\n";
    cin >> number;
}

int sumOfNumbers(int fn, int sn)//int wypuszcza wartoœæ
{
    int s;
    s = fn + sn;
    return s;
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    /*task1();
    task1();
    task2("Witaj œwiecie!!!");
    task2("Ala ma kota");
    string text = "Uczyæ siê programowania!!!";
    task2(text);

    task3("Jan", 35);
    task3("Ala", 17);*/

    //int number = 5;
    //cout << "Zmienna number w funkcji main: " << number << "\n";
   // task4(number);
    //cout << "Zmienna number w funkcji main: " << number << "\n";

    // task4(9);
    //const int NUMBER = 9;
   // task4(NUMBER);

    //cout << "Zmienna number w funkcji main: " << number << "\n";
    //task5(number);
    //cout << "Zmienna number w funkcji main: " << number << "\n";      

    //task5(9) - //B£¥D - przez parametr mozna przekazaæ tylko zmienn¹
    //task5(NUMBER) - //B£¥D - przez parametr mo¿na przekazaæ tylko zmienn¹

    //int numberFromUser = 5;
    //task6_GetNumber(numberFromUser);
    //cout << "U¿ytkownik poda³ liczbê: " << numberFromUser << "\n";

    int numberFromUser = 16;

    double result = sqrt(numberFromUser);

    int firstNumber, secondNumber, sum;
    firstNumber = 9;
    secondNumber = 1;
    sum = sumOfNumbers(firstNumber, secondNumber);
    cout << sum << "\n"; 
}