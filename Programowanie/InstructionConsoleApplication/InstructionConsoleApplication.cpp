
#include <iostream>


/*
Operatory warunkowe:
> - wiêksze
< - mniejsze
>= - wiêksze b¹dŸ równe
<= - mniejsze b¹dŸ równe
== - równe
!= - nie równe

Operatory logiczne:
&& - AND
|| - OR
! - NOT

a   b   a&&b    a||b    !a
F   F     F       F     T
T   F     F       T     T
F   T     F       T     F
T   T     T       T     F

F - false
T - true

*/
 //.Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
 //.Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
 //.Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny.Wyœwietl odpowiedni komunikat.
 //.Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
 //.Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
  //Na podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
//* .Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t.Wyœwietl odpowiedni komunikat.
//* .Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe.Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
//* .Program sprawdzaj¹cy czy podana data jest poprawna(np.sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)

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

//Napisz program, który wyœwietli informacje czy liczba z zakresu <1 , 10>

void task3()
{
    int number;
    std::cout << "Podaj liczbê: \n";
    std::cin >> number;

    if (number >= 1 && number < 10)
        std::cout << "Liczba jest z zakresu.";
    else
        std::cout << "Liczba nie jest z zakresu.";
}

//Napisz program, który wykona dzielenie dwóch liczb.

void task4()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz¹ liczbê: \n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug¹ liczbê: \n";
    std::cin >> secondNumber;

    if (secondNumber != 0)
    {
        int quoitent = firstNumber / secondNumber;
        std::cout << "Wynik dzielenia: " << quoitent << "\n";
    }
    else
        std::cout << "Dzieleniew przez zero!!!\n";
}

//.Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.

void task5()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj liczbê: \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbê: \n";
    std::cin >> secondNumber;

    if ( firstNumber == secondNumber )
        std::cout << "Obie liczby s¹ równe.";
    else
        std::cout << "Obie liczby nie s¹ równe.";
}

//.Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia.Wyœwietl odpowiedni komunikat.

void task6()
{
    int age;
    std::cout << "Podaj wiek: \n";
    std::cin >> age;

    if (age >= 18)
        std::cout << "Dana osoba jest pe³noletnia.";
    else
        std::cout << "Dana osoba jest niepe³noletnia.";
}

//.Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹.Wyœwietl wynik.

void task7()
{
    int number;
    std::cout << "Podaj liczbê: \n";
    std::cin >> number;

    if (number < 0)
        std::cout << "Wartoœæ bezwzglêdna podanej liczby to: " << number * -1;
    else
        std::cout << "Wartoœæ bezwzglêdna podanej liczby to: " << number;
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
    
