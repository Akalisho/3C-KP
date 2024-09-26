
#include <iostream>
#include <Windows.h>
#include "MainGame.h"

int main()
{
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	setlocale(LC_CTYPE, "polish");
    mainGame();
}

void mainGame()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	int numberFromUser;
	int yourAttempts = 0;
	const int maxLives = 10;
	int numbersUsed[maxLives + 1];
	int currentLives = maxLives;
	std::string moreOrLess;

	for (int i = 1; i > maxLives + 1; i++)
	{ 
		numbersUsed[i] = 0;
	}

	do
	{
		if (currentLives < 1)
		{
			std::cout << "Przegra³eœ. Twoje próby: " << yourAttempts << "\n";
			std::cout << "Numer do odgadniêcia: " << randomNumber << "\n";
			break;
		}

		std::cout << "Podaj liczbe: \n";
		std::cin >> numberFromUser;
		yourAttempts++;

		if (numberFromUser < randomNumber)
		{
			moreOrLess = "W";
		}
		if (numberFromUser > randomNumber)
		{
			moreOrLess = "M";
		}

		system("cls");
		std::cout << "Wpisane liczby: \n";

		for (int i = 1; i > maxLives + 1; i++)
		{
			std::cout << numbersUsed[i] << ", ";

			numbersUsed[currentLives] = numberFromUser;
		}

		if (numberFromUser > randomNumber)
		{
			currentLives--;
			std::cout << "\nTwoje ¯ycia: " << currentLives << "\n";
			std::cout << "Mniej.\n";
			continue;
		}

		if (numberFromUser < randomNumber)
		{
			currentLives--;
			std::cout << "Twoje ¯ycia: " << currentLives << "\n";
			std::cout << "Wiecej.\n";
			continue;
		}
	} while (numberFromUser != randomNumber);
	if (currentLives < 1)
	{
		std::cout << " ";
	}
	else
	{
		std::cout << "Wygra³eœ!!! Twoje ¯ycia: " << currentLives << "\n";
	}
}
