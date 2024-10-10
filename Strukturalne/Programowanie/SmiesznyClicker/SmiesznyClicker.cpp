
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Functions.h"

int main()
{
	//::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	mainGame();
}

void click(int &clicks, char input)
{
	int quitGame = 0;

	while (quitGame == 0)
	{
		input = _getch();

		switch (input)
		{
		case 'c':
		{
			system("cls");
			Sleep(100);
			clicks++;
			std::cout << "Your Clicks: " << clicks << "\n";
			std::cout << "Press 'q' to end the game.\n";
		}
		case 'q':
		{
			quitGame++;
		}
		}
	}
}

void mainGame()
{
	int clicks = 0;
	char input = 0;

	std::cout << "Welcome to the Clicker Game!!!\n";
	std::cout << "Press 'c' to Click, 'q' to quit.\n";

	click(clicks, input);

	system("cls");
	std::cout << "Koniec gry. \n";
}
