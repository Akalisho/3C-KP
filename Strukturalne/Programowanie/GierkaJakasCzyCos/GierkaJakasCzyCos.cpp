
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
	const int maxLives = 10;
	int numbersUsed[maxLives + 1];
	int currentLives = maxLives;
	do
	{
		std::cout << "Podaj liczbe: \n";
		std::cin >> numberFromUser;
		numbersUsed[] = numberFromUser;
		system("cls");
		for (int i = 0; i <= maxLives + 1; i++)
		{
			std::cout << numbersUsed[i] << ", ";
		}

		if (numberFromUser > randomNumber)
		{
			currentLives--;
			std::cout << "Twoje ¯ycia: " << currentLives << "\n";
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

		if (currentLives < 1)
		{
			std::cout << "Przegra³eœ. Twoje próby: " << currentLives << "\n";
			std::cout << "Numer do odgadniêcia: " << randomNumber << "\n";
			break;
		}
	} while (numberFromUser != randomNumber);
		std::cout << "Wygra³eœ!!! Twoje ¯ycia: " << currentLives << "\n";
}
