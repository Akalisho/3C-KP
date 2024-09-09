#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

//W losowym miejscu pojawienie siê gwiazdki i znikniêcie po pewnym czasie.
struct point 
{
	unsigned short x;
	unsigned short y;
};

void setCursor(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void showConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

void getConsolResolution(int& consoleWidth, int& consoleHeight)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left;
	consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top;
}
int main()
{
	srand(time(0));
	int consoleHeight, consoleWidth;
	getConsolResolution(consoleWidth, consoleHeight);

	showConsoleCursor(false);
	system("cls");

	while (true)
	{
		point coordinate;
		coordinate.x = rand() % consoleWidth;
		coordinate.y = rand() % consoleHeight;

		setCursor(coordinate.x, coordinate.y);
		std::cout << "*";

		Sleep(500);

		setCursor(coordinate.x, coordinate.y);
		std::cout << " ";
	}
}
