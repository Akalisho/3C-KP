
#include <iostream>


/*
Operatory warunkowe:
> - wiêksze
< - mniejsze
>= - wiêksze b¹dŸ równe
<= - mniejsze b¹dŸ równe
== - równe
!= - nie równe
*/

//Napisz program, który wyœwietli informacje, czy liczba jest dodatnia czy nie.

void task1()
{
    int number;
    std::cout << "Podaj liczbê: \n";
    std::cin >> number;

    if (number < 0)
        std::cout << "Liczba jest ujemna.\n";

    if (number > 0)
        std::cout << "Liczba jest dodatnia.\n";

    if (number == 0)
        std::cout << "Liczba jest równa 0.\n";
}

//Napisz program, który wyœwietli informacje, czy liczba jest parzysta czy nieparzysta.

void task2()
{
    int number;
    std::cout << "Podaj liczbê: \n";
    std::cin >> number;

    if (number % 2 == 0)
        std::cout << "Liczba jest parzysta.";
    else
        std::cout << "Liczba jest nieparzysta.";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    task2();
}
    
