#include <iostream>
using namespace std;

/*
* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
* Rozkład liczby na czynniki pierwsze
*/

//Napisz program, który wyświetli "Hello World" tyle razy, ile chce użytkownik.

void task1()
{
	int howManyTimes;
	cout << "Podaj ile razy wyświetlić:\n";
	cin >> howManyTimes;

	for (int i = 0; i != howManyTimes; i++)
	{
		cout << "Hello World!!!\n";
	}
}

//Napisz program który wyświetli liczby parzyste do podanej przez użytkownika liczby.

void task2()
{
	int upperRange;
	cout << "Podaj górną granicę do wyświetlenia.\n";
	cin >> upperRange;

	for (int i = 0;  i <= upperRange; i += 2)
	{
		cout << i << "\n";
	}
}

//Program obliczający sumę liczb od 1 do 100

void task3()
{
	int number = 1;
	int sum = 0;

	for (int i = 0; i != 100; i += 1)
	{
		sum += number;
		number += 1;
	}
	cout << sum << "\n";
}

//Program sprawdzający czy podana liczba jest liczbą doskonałą
//(czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie,
//np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).

void task4()
{
	int sum = 0;
	int number;
	cout << "Podaj liczbe: \n";
	cin >> number;

	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	cout << "Suma dzielników: " << sum << "\n";

	if (number == sum)
		cout << "Liczba jest doskonala. \n";
	else
		cout << "Liczba nie jest doskonała. \n";
}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void task5()
{
	int i = 0;
	for (int number = 1; number <= 10; number++)
	{
		std::cout << i << "\n";
		i = number * number;
	}
	std::cout << i;
}

//Program obliczający n!.
void task6()
{
	int number;
	int sum = 1;
	cout << "Podaj liczbe: \n";
	cin >> number;

	for (int i = 1; i != 11; i++)
	{
		sum *= i;
		cout << sum;
	}
}

//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)

void task7()
{
	for (int i = 1; i != 11; i++)
	{
		cout << i << "!, ";
	}
}

//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).

void task8()
{
	int number = 0;

	for (int i = 1; i <= 10; number = i++)
	{
		cout << "1x" << number << "=" << number << ", ";
	}
}

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

void task9()
{
	int number = 3;
	
	for (int i = 3; number <= 100; number += i)
	{
		cout << number << ", ";
	}
}

//Program obliczający sumę kwadratów liczb od 1 do 10

void task10()
{
	int i = 0;
	int sum = 0;
	for (int number = 1; number <= 10; number++)
	{
		i = number * number;
		sum += i;
	}

	cout << sum;
}

//Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu 
// (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

void task11()
{
	int number = 0;
	int firstNumber = 1;

	for (int i = 0; i < 10; i++)
	{
		cout << firstNumber << ", ";
		cout << number << ", ";
		firstNumber += number;
		number += firstNumber;
	}
}

//Program, kóry wyświetli poniższe cztery zwory:
//****  54321        121212        122333
//***   65432        212121        223334444
//**    76543        121212        333444455555
//*     87654        212121        444455555666666

void task12()
{
	const int NUMBER_OF_LINES = 8;
	for (int lineNumber = 0; lineNumber < NUMBER_OF_LINES; lineNumber++)
	{
		for (int i = 0; i < NUMBER_OF_LINES - lineNumber; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

void task13()
{
	const int NUMBER_OF_LINES = 4;
	for (int lineNumber = 0; lineNumber < NUMBER_OF_LINES; lineNumber++)
	{
		for (int i = 5; i > 0; i--)
		{
			cout << i + lineNumber;
		}
		cout << "\n";
	}
}

void task14()
{

}

int main()
{
	task14();
}