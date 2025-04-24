
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>

int GCD(int a, int b) {
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int oddNumberAbbreviation(int n)
{
	int m = 0;
	std::vector<int> digits;

	while (n > 0)
	{
		int digit = n % 10;
		if (digit % 2 == 1)
		{
			digits.push_back(digit);
		}
		n /= 10;
	}

	if (digits.size() == 0)
	{
		return -1;
	}

	for (int i = digits.size() - 1; i >= 0; i--)
	{
		m = m * 10 + digits[i];
	}

	return m;
}

int main()
{
	std::ifstream file("skrot_przyklad.txt");

	if (file.is_open())
	{
		std::vector<int> numbers;

		int num;

		while (file >> num)
			numbers.push_back(num);

		std::cout << "Odczytane liczby:\n";
		for (int num : numbers)
		{
			std::cout << num << ", ";
		}
		std::cout << "\n";

		std::cout << "Nieparzyste skroty liczb:\n";

		for (int num : numbers)
		{
			int result = oddNumberAbbreviation(num);

			if (result == -1)
				std::cout << num << " - Nieparzysty skrot nie istnieje\n";
			else
				std::cout << result << "\n";
		}

		std::cout << "Zadanie 3.2:\n";

		int biggestOddAbbreviatedNumber = 0;
		int notOddAbbreviatedNumbersCount = 0;

		for (int num : numbers)
		{
			int result = oddNumberAbbreviation(num);

			if (result == -1)
			{
				notOddAbbreviatedNumbersCount++;
				if (num > biggestOddAbbreviatedNumber)
					biggestOddAbbreviatedNumber = num;
			}
		}

		std::cout << "Ilosc liczb z nieistniejacymi nieparzystymi skrotami: " << notOddAbbreviatedNumbersCount << "\n";
		std::cout << "Najwieksza z liczb z nieistniejacymi nieparzystymi skrotami: " << biggestOddAbbreviatedNumber << "\n";
	}
	else
		std::cout << "Plik nie poprawnie otwarty!!!\n";
	
	file.close();

	std::ifstream file2("skrot2_przyklad.txt");

	if (file2.is_open())
	{
		std::vector<int> numbers2; 

		int num2;
		 
		while (file2 >> num2) 
			numbers2.push_back(num2); 

		std::cout << "\n\nZadanie 3.3:\n";

		std::cout << "Odczytane liczby:\n";
		for (int num2 : numbers2)
		{
			std::cout << num2 << ", "; 
		}
		std::cout << "\n";

		std::cout << "Nieparzyste skroty liczb z NWD = 7:\n";

		for (int num2 : numbers2) 
		{
			int result = oddNumberAbbreviation(num2); 

			int greatestCommonDevider = GCD(num2, result);
			if (greatestCommonDevider == 7)
			{
				std::cout << num2 << "\n";
			}
		}
	}
}
