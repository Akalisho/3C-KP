
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

int main()
{
    setlocale(LC_CTYPE, "polish");

    task1();
    task1();
    task2("Witaj œwiecie!!!");
    task2("Ala ma kota");
    string text = "Uczyæ siê programowania!!!";
    task2(text);

    task3("Jan", 35);
    task3("Ala", 17);
}