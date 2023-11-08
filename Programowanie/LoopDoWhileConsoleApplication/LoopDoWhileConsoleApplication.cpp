
#include <iostream>

void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczbê doodatni¹:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczbê doodatni¹:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczbê doodatni¹:\n";
					std::cin >> numberFromUser;
					//wklejamy ca³ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task2()
{
	int numberFromUser;
	
	do
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, który wylosuje liczbe, a u¿ytkownik bêdzie musia³ zgadn¹æ.

void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	int numberFromUser;
	do
	{
		std::cout << "Podaj liczbe: \n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Mniej.\n";
		if (numberFromUser < randomNumber)
			std::cout << "Wiecej.\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje u¿ytkowniku!! Zainstalowa³eœ Albion Online!!";
}

//Napisz program wyœwietlaj¹cy liczby z przedzia³u <1;6>
void task4()
{
	unsigned long long upperRange;
	unsigned long long currentNumber = 0;
	std::cout << "Podaj zakres gorny wiekszy badz rowny 1: \n";
	std::cin >> upperRange;
	do
	{
		//currentNumber = currentNumber + 1
		//currentNumber += 1
		//currentNumber++
		++currentNumber 
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

int main()
{
	task4();
}