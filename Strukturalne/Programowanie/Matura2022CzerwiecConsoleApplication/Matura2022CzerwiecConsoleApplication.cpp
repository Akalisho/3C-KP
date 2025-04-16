
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

bool isNumberPrime(int number)
{
	if (number < 2)
		return false;

	for (int i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

int main()
{
	std::ifstream file("przyklad.txt");

	if (file.is_open())
	{
		std::vector<int> numbers;

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

		std::vector<int> reversedDividedBy17;

		for (int num : numbers)
		{
			int reversedNum = reverseNumber(num);
			std::cout << reversedNum << "\n";
			if (reversedNum % 17 == 0)
			{
				reversedDividedBy17.push_back(reversedNum);
			}
		}

		std::cout << "\n Liczby odwrocone podzielne przez 17: \n";

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

		for (int num : numbers)
		{
			int reversedNum = reverseNumber(num);

			if (isNumberPrime(num) && isNumberPrime(reversedNum))
			{
				std::cout << num << "\n";
			}
		}

		std::cout << "Zadanie 4.4:\n";

		std::vector<int> counters; 

		for (int num : numbers) 
		{
			counters[num]++; 
		}

		int diffNumbers = 0;
		int repeatTwoTimes = 0;

		for (int counter : counters) 
		{
			if (counter != 0)
				diffNumbers++;
			if (counter == 2)
				repeatTwoTimes++;
		}
	}
}

