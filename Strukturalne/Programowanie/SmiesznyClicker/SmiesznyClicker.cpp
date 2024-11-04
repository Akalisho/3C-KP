
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cmath>
#include "Functions.h"

int main()
{
	//::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	mainGame();
}

void mainGame()
{
	float clicks = 0;
	char input = 0;

	std::cout << "Welcome to the Clicker Game!!!\n";
	std::cout << "Press 'c' to Click, 'q' to quit.\n";

	click(clicks, input);

	system("cls");
	std::cout << "Koniec gry. \n";
}

void prestiging(float& clicks, char input)
{
	system("cls");
	std::cout << "Your Clicks: " << clicks << "\n";
	std::cout << "Press 'c' to get back to clicks menu.\n";
	std::cout << "Press 'r' to prestige.";
	if (input == 'r' && clicks >= 1000)
	{
		float prestigeCalculation = (9 * (1.4 ^ (clicks / 10)) * 1.15);
		float prestige = std::floor(prestigeCalculation); 
	}
}

void click(float& clicks, char input)
{
	int quitGame = 0;
	float prestige = 0;

	while (quitGame == 0)
	{
		input = _getch();

		switch (input)
		{
		case 'c':
		{
			system("cls");
			Sleep(100);
			clicks += std::floor(100 + (prestige * 0.25));
			std::cout << "Your Clicks: " << clicks << "\n";
			std::cout << "Press 'q' to end the game.\n";
			std::cout << "Press 'r' to open prestige menu.\n";
		}

		case 'q':
		{
			quitGame++;
		}

		case 'r':
		{
			prestiging(clicks, input);
		}
		}
	}
}