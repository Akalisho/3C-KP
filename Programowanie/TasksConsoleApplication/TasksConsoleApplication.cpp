
#include <iostream>

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
                        
                    else
                        result = firstNumber / secondNumber;

    if (operationNumber > 4 || operationNumber < 1)
        cout << "Dzia³anie niepoprawne.";
    else
        cout << "Wynik operacji matematycznej: " << result;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}