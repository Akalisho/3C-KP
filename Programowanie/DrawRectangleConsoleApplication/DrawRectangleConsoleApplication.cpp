#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

enum keyCode {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ESC,
	ENTER
};

struct point {
	unsigned short x;
	unsigned short y;
};

struct boardCoordinates {
	point leftTop, rightBottom;
};

void setCursor(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void setCursor(point& p)
{
	/*COORD c;
	c.X = p.x;
	c.Y = p.y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);*/

	setCursor(p.x, p.y);
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

void printCharacter(point& p, char sign)
{
	setCursor(p);
	std::cout << sign;
}

keyCode codeChar(unsigned char charToCode)
{
	if (charToCode == 'w' || charToCode == 72)
		return keyCode::UP;
	if (charToCode == 's' || charToCode == 80)
		return keyCode::DOWN;
	if (charToCode == 'a' || charToCode == 75)
		return keyCode::LEFT;
	if (charToCode == 'd' || charToCode == 77)
		return keyCode::RIGHT;
	if (charToCode == 27)
		return keyCode::ESC;
	if (charToCode == 13)
		return keyCode::ENTER;
}

keyCode getKeyCode(keyCode prevKeyCode)
{
	unsigned char currentChar = 0;
	keyCode currentKeyCode = prevKeyCode;
	if (_kbhit())
	{
		currentChar = _getch();
		if (currentChar == 224 || currentChar == 0)
		{
			currentChar = _getch();
			if (currentChar == 72
				|| currentChar == 80
				|| currentChar == 75
				|| currentChar == 77
				|| currentChar == 27)
				currentKeyCode = codeChar(currentChar);
		} else if (currentChar == 'w'
			|| currentChar == 's'
			|| currentChar == 'a'
			|| currentChar == 'd'
			|| currentChar == 27)
			currentKeyCode = codeChar(currentChar);
	}
	return currentKeyCode;
}
void changeCoordinate(point& coordinate, keyCode currentKeyCode)
{
	switch (currentKeyCode)
	{
	case keyCode::UP:
		coordinate.y--;
		break;
	case keyCode::DOWN:
		coordinate.y++;
		break;
	case keyCode::LEFT:
		coordinate.x--;
		break;
	case keyCode::RIGHT:
		coordinate.x++;
		break;
	default:
		break;
	}
}

void printBoard(boardCoordinates& board)
{
	/*
	########################
	#					   #
	#					   #
	#					   #
	#					   #
	########################
	*/

	setCursor(board.leftTop);
	for (int i = board.leftTop.x; i <= board.rightBottom.x; i++)
		std::cout << "#";

	for (int row = board.leftTop.y + 1; row < board.rightBottom.y; row++)
	{
		setCursor(board.leftTop.x, row);
		std::cout << "#";

		setCursor(board.rightBottom.x, row);
		std::cout << "#";
	}

	setCursor(board.leftTop.x, board.rightBottom.y);
	for (int i = board.leftTop.x; i <= board.rightBottom.x; i++)
		std::cout << "#";
}

int main()
{
	point snakeCoordinates[1];
	unsigned int snakeHead = 0;

	keyCode currentKeyCode = keyCode::RIGHT;
	int consoleHeight, consoleWidth;

	boardCoordinates board;

	getConsolResolution(consoleWidth, consoleHeight);

	board.leftTop.x = 10;
	board.leftTop.y = 2;
	board.rightBottom.x = consoleWidth - 30;
	board.rightBottom.y = consoleHeight - 10;

	showConsoleCursor(false);
	system("cls");

	printBoard(board);

	while (true)
	{
		printCharacter(snakeCoordinates[snakeHead], 'X');

		currentKeyCode = getKeyCode(currentKeyCode);

		Sleep(300);

		changeCoordinate(snakeCoordinates[snakeHead], currentKeyCode);

		if (currentKeyCode == keyCode::ESC)
			break;
	}
}