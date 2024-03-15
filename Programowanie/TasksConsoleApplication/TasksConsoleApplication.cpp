
#include <iostream>
#include <string>

using namespace std;

/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.

Instrukcje:

Poproœ u¿ytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mno¿enie lub dzielenie).
W zale¿noœci od wyboru u¿ytkownika, wykonaj odpowiedni¹ operacjê arytmetyczn¹.
Wyœwietl wynik operacji.
Przyk³adowe dzia³anie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno¿enie
4. Dzielenie
inna liczba koñczy program.

Wybierz operacjê: 3
Podaj pierwsz¹ liczbê: 5
Podaj drug¹ liczbê: 3

Wynik mno¿enia: 15
*/


void task1()
{
    int operationNumber, firstNumber, secondNumber, result = 0;
    cout << "Wybierz operacjê (1 - 4): \n1. Dodawanie\n2. Odejmowanie\n3. Mno¿enie\n4. Dzielenie\n";
    cin >> operationNumber;
    cout << "Podaj pierwsz¹ liczbê: \n";
    cin >> firstNumber;
    cout << "Podaj drug¹ liczbê: \n";
    cin >> secondNumber;
    
    if (operationNumber == 1)
        result = firstNumber + secondNumber;
    else
        if (operationNumber == 2)
            result = firstNumber - secondNumber;
        else
            if (operationNumber == 3)
                result = firstNumber * secondNumber;
            else
                if (operationNumber == 4)
                    if (secondNumber == 0)
                        cout << "Koniec Programu.";
                    else
                        result = firstNumber / secondNumber;

    if (operationNumber > 4 || operationNumber < 1)
        cout << "Dzia³anie niepoprawne.";
    else
        cout << "Wynik operacji matematycznej: " << result;
}

/*
ZADANIE
Konwersja temperatury

Napisz program, który bêdzie konwertowaæ temperaturê pomiêdzy skalami: Celsiusza, Fahrenheita i Kelvina.

Instrukcje:

Poproœ u¿ytkownika o wybór jednostki, z której chce dokonaæ konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Poproœ u¿ytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperaturê na pozosta³e jednostki (z wykorzystaniem odpowiednich wzorów konwersji).
Wyœwietl przeliczone temperatury.
Przyk³adowe dzia³anie programu:

Konwerter Temperatur
---------------------
Wybierz jednostkê temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wybór: C

Podaj temperaturê w stopniach Celsiusza: 25

Przeliczona temperatura:
Fahrenheit: 77.0 °F
Kelvin: 298.15 K
*/

void showMenuTemperature()
{
    cout << "Wybierz operacjê (1 - 3): \n";
    cout << "-------------------------\n";
    cout << "1. Celcjusz (C)\n";
    cout << "2. Fahrenheit (F)\n";
    cout << "3. Kelvin (K)\n";
    cout << "0. Koniec Programu\n";
}

void task2()
{
    while (true)
    {
        showMenuTemperature;

        int conversionChoice;
        cout << "Wybór: \n";
        cin >> conversionChoice;

        if (conversionChoice == 0 || conversionChoice > 3 || conversionChoice < 0)
            cout << "Koniec programu.";
            break;

        double Celcius, Fahrenheit, Calvin;
        if (conversionChoice == 1)
            cout << "Podaj temperaturê w stopniach Celcjusza:";
            cin >> Celcius;
       if (conversionChoice == 2)
                cout << "Podaj temperaturê w stopniach Celcjusza:";
            cin >> Fahrenheit;
       if (conversionChoice == 3)
                cout << "Podaj temperaturê w stopniach Celcjusza:";
            cin >> Calvin;
            
    }


}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}