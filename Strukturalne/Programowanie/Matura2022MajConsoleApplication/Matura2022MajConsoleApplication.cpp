
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream file("przyklad.txt");

	/*
	int numbers[200];

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
	}

	std::cout << "Odczytane liczby: \n";
	for (int i = 0; i < 200; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	*/

	std::vector<int> numbers;

	int num;
	int firstNumber = 0;

	while (file >> num)
		numbers.push_back(num);

	/*
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	*/
	std::cout << "Odczytane liczby:\n";
	for (int num : numbers)
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";

	std::cout << "Zadanie 4.1:\n";

	int count = 0;
	for (int num : numbers)
	{
		int firstDigit;
		int lastDigit = num % 10;

		int tmpNum = num;
		do
		{
			firstDigit = tmpNum % 10;
			tmpNum = tmpNum / 10;
		} while (tmpNum != 0);

		if (firstDigit == lastDigit)
		{
			count++;
		}
	}

	firstNumber = numbers[0];
	std::cout << count << " " << firstNumber << "\n";

	std::cout << "Zadanie 4.2:\n";

	int numberWithMostPrimeFactors = 0;
	int numberWithMostUniquePrimeFactors = 0;
	int mostPrimeFactors = 0;
	int mostUniquePrimeFactors = 0;

	for (int num : numbers)
	{
		int primeFactor = 2;
		int primeFactorCount = 0;
		bool isUniquePrimeFactor = true;
		int uniquePrimeFactorCount = 0;
		std::cout << num << " = ";
		int tempNum = num;
		while (tempNum > 1)
		{
			if (tempNum % primeFactor == 0)
			{
				tempNum /= primeFactor;
				primeFactorCount++;
				
				std::cout << primeFactor << ", ";
				if (isUniquePrimeFactor == true)
				{
					uniquePrimeFactorCount++;
				}
				isUniquePrimeFactor = false;
			}
			else
			{
				primeFactor++;
				isUniquePrimeFactor = true;
			}
		}
		if (primeFactor > mostPrimeFactors)
		{
			mostPrimeFactors = primeFactor; 
			numberWithMostPrimeFactors = num; 
		}

		if (uniquePrimeFactorCount > mostUniquePrimeFactors)
		{
			mostUniquePrimeFactors = uniquePrimeFactorCount;
			numberWithMostUniquePrimeFactors = num;
		}
		std::cout << "Liczba czynnikow pierwszych: " << primeFactorCount << ", " << "Liczba unikalnych czynnikow pierwszych: " << uniquePrimeFactorCount << "\n";
	}
	std::cout << "Liczba: " << numberWithMostPrimeFactors << " Liczba czynnikow pierwszych: " << mostPrimeFactors << "\n";
	std::cout << "Liczba: " << numberWithMostUniquePrimeFactors << " Liczba unikalnych czynnikow pierwszych: " << mostUniquePrimeFactors << "\n";
}

