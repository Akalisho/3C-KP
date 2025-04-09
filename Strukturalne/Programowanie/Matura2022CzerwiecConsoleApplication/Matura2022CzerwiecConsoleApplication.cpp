
#include <iostream>
#include <fstream>
#include <vector>

int reverseNumber(int num)
{
	int reversed = 0;

	while (num > 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed;
}

int main()
{
	std::ifstream file("przyklad.txt");

	if (file.is_open())
	{
		std::vector<int> numbers;
		std::vector<int> reversedDividedBy17;

		int num;
		int firstNumber = 0;

		while (file >> num)
		{
			numbers.push_back(num);
		}

		std::cout << "Odczytane liczby:\n";

		for (int num : numbers)
		{
			std::cout << num << ", ";
		}
		std::cout << "\n";

		std::cout << "Zadanie 4.1:\n";

		for (int num : numbers)
		{
			int reversedNum = reverseNumber(num);
			std::cout << reversedNum << "\n";
			if (reversedNum % 17 == 0)
			{
				reversedDividedBy17.push_back(reversedNum);
			}
		}

		std::cout << "\nLiczby odwrocone podzielne przez 17: \n";

		for (int num : reversedDividedBy17)
		{
			std::cout << num << "\n";
		}

		std::cout << "Zadanie 4.2:\n";

		int highestOfDifferencesOfNumAndReversedNum = 0;
		int numWithHighestDifferenceOfNumAndReversedNum = 0;

		for (int num : numbers)
		{
			int reversedNum = reverseNumber(num);
			std::cout << reversedNum << "\n";

			int differenceOfNumAndReversedNum = num - reversedNum;

			if (differenceOfNumAndReversedNum < 0)
				differenceOfNumAndReversedNum = differenceOfNumAndReversedNum * -1;

			std::cout << differenceOfNumAndReversedNum << "\n";

			if (differenceOfNumAndReversedNum > highestOfDifferencesOfNumAndReversedNum)
			{
				numWithHighestDifferenceOfNumAndReversedNum = num;
				highestOfDifferencesOfNumAndReversedNum = differenceOfNumAndReversedNum;
			}
		}
		std::cout << "Liczba i jej odbicie z najwieksza wartoscia bezwzgledna ich roznicy:\n" << numWithHighestDifferenceOfNumAndReversedNum << ", " << highestOfDifferencesOfNumAndReversedNum << "\n";

		std::cout << "Zadanie 4.3:\n";


	}
}

