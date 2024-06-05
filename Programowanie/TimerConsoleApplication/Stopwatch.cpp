#include <iostream>
#include <Windows.h>
#include "Stopwatch.h"
using namespace std;

int seconds = 0, minutes = 0, hours = 0;
void countTime()
{
	while (true)
	{
		system("cls");
		seconds++;

		if (seconds < 10)
		{
			cout << "0" << seconds << ":";
		}

		if (seconds > 59)
		{
			seconds = 0;
			minutes++;
		}

		if (minutes < 10)
		{
			cout << "0" << minutes << ":";
		}

		if (minutes > 59)
		{
			minutes = 0;
			hours++;
		}

		Sleep(1000);
	}
}