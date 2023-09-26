// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Napisz program któr wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli.

    std::cout << "Podaj numer:\n";
    int numberFromUser;
    std::cin >> numberFromUser;

    std::cout << "Podales: " << numberFromUser << "\n";

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
