// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

 //Napisz program któr wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli.
void task1()
{
    std::cout << "Podaj numer:\n";
    int numberFromUser;
    std::cin >> numberFromUser;
    std::cout << "Podales: " << numberFromUser << "\n";

}

//Program obliczaj¹cy œredni¹ dwóch liczb

void task2()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsza liczbe\n";
    std::cin >> firstNumber;
    std::cout << "Podaj druga liczbe\n";
    std::cin >> secondNumber;
    int average;
    average = (firstNumber + secondNumber) / 2;
    std::cout << "Srednia wynosi: " << average << "\n";
}

//Program obliczaj¹cy pole prostok¹ta.

void task3()
{
    int firstSide, secondSide;
    std::cout << "Podaj pierwszy bok\n";
    std::cin >> firstSide;
    std::cout << "Podaj drugi bok\n";
    std::cin >> secondSide;
    int area;
    area = firstSide * secondSide;
    std::cout << "Pole prostok¹ta wynosi: " << area << "\n";
}

//Program obliczaj¹cy objêtoœæ sto¿ka.

void task4()
{
    double beam, height;
    std::cout << "Podaj promieñ: \n";
    std::cin >> beam;
    std::cout << "Podaj wysokoœæ: \n";
    std::cin >> height;
    double volume;
    volume = (height / 3) * 3.1415 * (beam * beam);
    std::cout << "Objêtoœæ sto¿ka wynosi: " << volume << "\n";
}

//Program obliczaj¹cy pole ko³a.

void task5()
{
    double beam;
    std::cout << "Podaj promieñ: \n";
    std::cin >> beam;
    std::cout << "Pole ko³a to: \n" << (beam * beam) * 3.1415;
}

//Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2.

void task6()
{
    double SideA, SideB;
    std::cout << "Podaj bok A: \n";
    std::cin >> SideA;
    std::cout << "Podaj bok B: \n";
    std::cin >> SideB;
    std::cout << "Wynik to: " << SideA * SideA + SideB * SideB;
}

//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h.

void task7()
{
    double base_side, height;
    std::cout << "Podaj bok podstawy: \n";
    std::cin >> base_side;
    std::cout << "Podaj wysokoœæ trójk¹ta: \n";
    std::cin >> height;
    std::cout <<
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    task7();
}

/*
   Algorytm - skoñczony zbiór instrukcji, który rozwi¹zuje zadany problem.
   Okreœla te¿ kolejnoœæ wykonywanych instrukcji.
   Zapis algorytmu:
   * rysunki
   * opis s³owny
   * w punktach
   * schemat blokowy
   * kod Ÿród³owy danego jêzyka programowania
   * pseudokod
   
   Zmienna jest to pewien obszar w pamiêci operacyjnej, w której mo¿na
             w danej chwili przechowaæ tylko jedn¹ dan¹.
   Instrukcja deklaracji zmiennej:
    typ_zmiennej nazwa_zmiennej;

    Typ zmiennej - wielkoœæ obszarów pamiêci, interpretacja ci¹gu bitów.
     int - 4 bajtowa liczba ca³kowita ze znakiem <2 147 483 648, 2 147 483 647>
     short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
     long - to samo co int
     long long - 8 bajtowa liczba ca³kowita ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

     unsigned - zmienna bez znaku <0, 2*max + 1>

     float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
     double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
     long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku

    Nazwa zmiennej - nazwa obszarów pamiêci, indentyfikator
     Warunki niezbêdne:
   * dozwolone znaki:
     - alfabet angielski aA-zZ
     - cyfry arabskie 0-9
     - podkreœlenie (pod³oga)
   * pierwszym znakiem nie mo¿e byæ cyfra
   * unikalny w swoim zakresie widocznoœci
   * nie mo¿e byæ to s³owo kluczowe (zarezerwowane) danego jêzyka
   
     Warunki programistów:
   * nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
   * jeœli wiele s³ów to w miejscu spacji podkreœclenie zaczynaj¹c od
     drugiego s³owa piszemy je od du¿ej litery
   * piszemy po angielsku
 */
