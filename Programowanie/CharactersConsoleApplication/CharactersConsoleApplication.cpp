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

//Napisz program, który poprosi ciê o twoje imiê i ciê przywita.

void task3()
{
    string userName;
    cout << "Podaj imiê.\n";
    cin >> userName;

    cout << "Witaj " << userName;
}

//Napisz program sprawdzaj¹cy czy podane has³o jest poprawne.

void task4()
{
    string password;
    cout << "Podaj has³o.\n";
    cin >> password;

    if (password == "yourmom183")
        cout << "welcome your ass";
    else
        cout << "you stupid";
}

//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.

void task5()
{
    string textFromUser;
    cout << "Podaj lañcuch znaków.\n";
    cin >> textFromUser;

    int numberOfCharacters = 0;

    //cout << "Pierwszy znak to: " << textFromUser[0] << "\n";
    //textFromUser[1] = 'x';
    //cout << "Iloœæ znaków = " << textFromUser.length() << "\n";

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            numberOfCharacters++;
    }
    cout << "Ma³ych liter 'a' jest: " << numberOfCharacters;
}

//Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
//Program wyci¹gaj¹cy informacje z numeru PESEL
//Program implementuj¹cy algorytm szyfrowania Cezara(proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
//Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP.Np.na wejœciu 2 + 3 * 4 na wyjœcu da 234 * +
//Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
//Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu(np.A na Z, B na Y itd.)

//Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task6()
{
    string password;

    do
    {
        cout << "Podaj has³o: \n";
        cin >> password;

    } while (password != "aa");

    cout << "Gratulacje u¿ytkowniku!!!";
}

//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.

void task7()
{
    string textFromUser;
    cout << "Podaj lañcuch znaków.\n";
    cin >> textFromUser;

    int numberOfVowel = 0;

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a'
            || textFromUser[i] == '¹'
            || textFromUser[i] == 'e'
            || textFromUser[i] == 'ê'
            || textFromUser[i] == 'i'
            || textFromUser[i] == 'o'
            || textFromUser[i] == 'u'
            || textFromUser[i] == 'y'
            || textFromUser[i] == 'ó')
            numberOfVowel++;
    }
    cout << "Liczba spó³g³osek: " << textFromUser.length() - numberOfVowel << "\n";
    cout << "Liczba samog³osek: " << numberOfVowel;
}

//Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.

void task8()
{
    int numberFromUser, rest = 0;
    string numberBin;
    cout << "Podaj liczbê: \n";
    cin >> numberFromUser;

    while (numberFromUser != 0)
    {
        rest = numberFromUser % 2;
        numberFromUser /= 2;
        if (rest == 0)
            numberBin = "0" + numberBin;
        else
            numberBin = "1" + numberBin;
    }
    cout << numberBin;
}

//Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")

void task9()
{
    string wordFromUser;
    cout << "Podaj wyraz: \n";
    cin >> wordFromUser;

    string reverseWord = "";
    for (int i = 0; wordFromUser.length() ; i++)
    {
        
    }

    if (isPalindrome)
        cout << "Wyraz jest palindromem.\n";
    else
        cout << "Wyraz nie jest palindromem.\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task9();
}

/*
Typy znakowe:
char - 1 bajt, ca³kowitoliczbowa ze znakiem <-128; 127> 
*/