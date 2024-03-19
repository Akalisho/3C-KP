
#include <iostream>
#include <string>

using namespace std;

#pragma region Zadanie 1
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
#pragma endregion
#pragma region Zadanie 2
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
        showMenuTemperature();
 
        int conversionChoice;
        cout << "Wybór: \n";
        cin >> conversionChoice;

        double Celcius, Fahrenheit, Calvin;
        if (conversionChoice == 0 || conversionChoice > 3 || conversionChoice < 0)
            break;
        else
            if (conversionChoice == 1)
                cout << "Podaj temperaturê w stopniach Celcjusza:";
                cin >> Celcius;
                cout << "\n";
                cout << "Przeliczona temperatura: \n";
                cout << "Fahrenheit: " << (Celcius * 9 / 5) + 32 << " °F\n";
                cout << "Kelvin: " << Celcius + 273.15 << " °K\n";
                break;
            if (conversionChoice == 2)
                cout << "Podaj temperaturê w stopniach Fahrenheita:";
                cin >> Fahrenheit;
                cout << "\n";
                cout << "Przeliczona temperatura: \n";
                cout << "Celcjusz: " << (Fahrenheit - 32) / 1.8 << " °F\n";
                cout << "Kelvin: " << (Fahrenheit - 459.67) * 5 / 9 << " °K\n";
            break;
            if (conversionChoice == 3) 
                cout << "Podaj temperaturê w stopniach Kalwina:";
                cin >> Calvin;
                cout << "\n";
                cout << "Przeliczona temperatura: \n";
                cout << "Celcjusz: " << Calvin - 273.15 << " °F\n";
                cout << "Fahrenheit: " << (Calvin * 1.8) - 459.67 << " °K\n";
                break;
    }
}
#pragma endregion
#pragma region Zadanie 3
/*
ZADANIE
Symulator rzutu kostk¹

Napisz program, który bêdzie symulowa³ rzut kostk¹. Program powinien umo¿liwiaæ u¿ytkownikowi wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna) oraz iloœæ rzutów. Po wykonaniu rzutów, program powinien wyœwietliæ wyniki oraz sumê otrzymanych wartoœci.

Instrukcje:

Poproœ u¿ytkownika o wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna).
Poproœ u¿ytkownika o podanie iloœci rzutów.
Wykonaj podan¹ liczbê rzutów wybranej kostk¹, zapisuj¹c wyniki.
Wyœwietl otrzymane wyniki oraz sumê otrzymanych wartoœci.
Przyk³adowe dzia³anie programu:

Symulator rzutu kostk¹
-----------------------

Wybierz rodzaj kostki (6/10/20): 10
Ile rzutów chcesz wykonaæ?: 5

Wyniki rzutów kostk¹ 10-œcienn¹:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8

Suma wyników: 33

*/
void showMenuDiceThrow()
{

}

void task3()
{
    showMenuDiceThrow()
}
#pragma endregion
int main()
{
    setlocale(LC_CTYPE, "polish");
    task3();
}