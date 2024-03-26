
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

int convertStringToInt(std::string value)
{
	int result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}

int getTemperature(std::string message)
{
	std::string strChoise;

	std::cout << message;

	std::getline(std::cin, strChoise);

	return convertStringToInt(strChoise);
}

void calculateTemperature(int conversionChoice, float &Celcius, float &Fahrenheit, float &Calvin)
{
	cout << "\n";
	cout << "Przeliczona temperatura: \n";
	switch (conversionChoice)
	{
	case 1:
		cout << "Fahrenheit: " << (Celcius * 9 / 5) + 32 << " °F\n";
		cout << "Kelvin: " << Celcius + 273.15 << " °K\n";
	case 2:
		cout << "Celcjusz: " << (Fahrenheit - 32) / 1.8 << " °F\n";
		cout << "Kelvin: " << (Fahrenheit - 459.67) * 5 / 9 << " °K\n";
	case 3:
		cout << "Celcjusz: " << Calvin - 273.15 << " °F\n";
		cout << "Fahrenheit: " << (Calvin * 1.8) - 459.67 << " °K\n";
	}
}

void task2()
{
	while (true)
	{
		showMenuTemperature();

		int conversionChoice = getTemperature("Wybór: ");

		float Celcius, Fahrenheit, Calvin;

		if (conversionChoice == 0 || conversionChoice > 3 || conversionChoice < 0)
			break;

		switch (conversionChoice)
		{
		case 1:
			Celcius = getTemperature("Podaj temperaturê w stopniach Celcjusza: ");
		case 2:
			Fahrenheit = getTemperature("Podaj temperaturê w stopniach Fahrenheita: ");
		case 3:
			Calvin = getTemperature("Podaj temperaturê w stopniach Kalwina: ");
		}
		
		calculateConversion(conversionChoice, Celcius, Fahrenheit, Calvin);
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
	cout << "Symulator rzutu kostk¹\n";
	cout << "-----------------------\n";
	cout << "Wybierz rodzaj kostki (6, 10, 20): \n";
}

void drawingNumbers(int diceChoice, int throws)
{
	int numbers;
	srand(time(0));
	cout << "Wylosowane liczby: ";
	for (int i = 0; i < throws; i++)
	{
		numbers = rand() % (diceChoice - 1 + 1) + 1;
		cout << numbers << ", ";
	}
	cout << "\n";
}

void task3()
{
	while (true)
	{
		showMenuDiceThrow();

		int diceChoice, throws;
		cin >> diceChoice;
		if (diceChoice == 6 || diceChoice == 10 || diceChoice == 20)
			true;
		else
			break;
		cout << "Ile rzutów chcesz wykonaæ?: \n";
		cin >> throws;

		drawingNumbers(diceChoice, throws);
	}
}

#pragma endregion
#pragma region Zadanie 4
/*
ZADANIE
Konwerter jednostek

Napisz program konwertuj¹cy jednostki miar. Program powinien umo¿liwiaæ konwersjê miêdzy ró¿nymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obs³ugiwaæ ró¿ne typy jednostek.

Instrukcje:

Zdefiniuj zestaw jednostek, które chcesz obs³ugiwaæ (np. d³ugoœæ: metry, centymetry, cale; masa: kilogramy, funty).
Poproœ u¿ytkownika o wybór jednostki wejœciowej i jednostki wyjœciowej oraz podanie wartoœci do konwersji.
Przekonwertuj wartoœæ z jednostki wejœciowej na jednostkê wyjœciow¹ na podstawie ustalonego wspó³czynnika konwersji.
Wyœwietl wynik konwersji.
Przyk³adowe dzia³anie programu:

Konwerter jednostek
-------------------

Wybierz jednostkê wejœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 1

Wybierz jednostkê wyjœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 2

Podaj wartoœæ do konwersji: 5

Wynik konwersji: 500 centymetrów

*/

void showMenuConverter()
{
	cout << "Konwerter jednostek\n";
	cout << "-------------------\n";
	cout << "Wybierz jednostkê wejœciow¹: \n";
	cout << "1. Metry\n";
	cout << "2. Centymetry\n";
	cout << "3. Cale\n";
}

int convertStringToInt(std::string value)
{
	int result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}

int getNumber(std::string message)
{
	std::string valueInt;

	std::cout << message;

	cin >> valueInt;

	return convertStringToInt(valueInt);
}

double convertStringToDouble(std::string value)
{
	double result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}

double getDoubleNumber(std::string message)
{
	std::string value;

	std::cout << message;

	cin >> value;

	return convertStringToDouble(value);
}

void calculateConversion(int choiceIn, double &centimeters, double &meters, double &cals)
{
	switch (choiceIn)
	{
	case 1:
		centimeters = meters * 100;
		cals = meters * 39.370;
	case 2:
		meters = centimeters / 100;
		cals = meters * 39.370;
	case 3:
		meters = cals * 0.0254;
		centimeters = meters * 100;
	}
}

void task4()
{
	while (true)
	{
		double centimeters, meters, cals;

		showMenuConverter();

		int choiceIn = getNumber("Wybór: ");

		if (choiceIn > 3 || choiceIn < 0)
			break;

		if (choiceIn == 1)
			meters = getDoubleNumber("Podaj wartoœæ w metrach: ");
		if (choiceIn == 2)
			centimeters = getDoubleNumber("Podaj wartoœæ w centymetrach: ");
		if (choiceIn == 3)
			cals = getDoubleNumber("Podaj wartoœæ w calach: ");
		
		calculateConversion(choiceIn, centimeters, meters, cals);

		cout << "Metry: " << meters << "\n";
		cout << "Centymetry: " << centimeters << "\n";
		cout << "Cale: " << cals << "\n";
	}
}

#pragma endregion

int main()
{
	setlocale(LC_CTYPE, "polish");
	task3();
}