
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream file("przyklad.txt");

	if (file.is_open())
	{
		std::vector<int> numbers;

		int num;
		int firstNumber = 0;

		while (file >> num)
			numbers.push_back(num);

		std::cout << "Odczytane liczby:\n";
		for (int num : numbers)
		{
			std::cout << num << ", ";
		}
		std::cout << "\n";
		
		std::cout << "Zadanie 4.1:\n";

		int reversedNum = 0;
		for (int num : numbers)
		{

		}
	}
}

