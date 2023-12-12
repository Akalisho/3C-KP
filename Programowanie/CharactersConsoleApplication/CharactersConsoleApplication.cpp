// CharactersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Napisz program, który pobierze od uzytkownika znak i wyœwietli go.

void task1()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    cout << "Poda³eœ znak: " << characterFromUser << "\n";
}

//Napisz program, który wczyta znak z klawiatury
//i sprawdzi czy jest ma³a litera alfabetu.

void task2()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        cout << "Jest to ma³a litera alfabetu.";
    else
        cout << "Jest to du¿a litera alfabetu.";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}

/*
Typy znakowe:
char - 1 bajt, ca³kowitoliczbowa ze znakiem <-128; 127> 
*/