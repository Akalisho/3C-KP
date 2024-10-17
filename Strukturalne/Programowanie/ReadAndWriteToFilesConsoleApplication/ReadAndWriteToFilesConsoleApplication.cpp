
#include <iostream>
#include <fstream>

void task1()
{
	std::string name;
	int age;

	std::cout << "Give name: \n";
	std::cin >> name;

	std::cout << "Give age: \n";
	std::cin >> age;

	std::ofstream writeToFile;
	writeToFile.open("c:\\plik2C.txt", std::ios_base::app /* - s³u¿y do nadpisywania w pliku */);

	if (writeToFile.is_open() == true)
	{
		//prace na pliku
		std::cout << name << "\n" << age << "\n";
		writeToFile.flush();

		writeToFile.close();
	}
}

void task2()
{
	std::ifstream readFromFile;
	readFromFile.open("c:\\plik2C.txt");
	if (readFromFile.is_open())
	{
		std::string name;
		int age;


		//while (readFromFile.eof() = false)
		while(readFromFile >> name)
		{
			//readFromFile >> name;
			readFromFile >> age;

			std::cout << "Imie: " << name << "Wiek: " << age << "\n";
		}
		readFromFile.close();
	}
}

int main()
{
	task2();
}
