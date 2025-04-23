
#include <iostream>
#include <fstream>
#include <vector>

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
		int firstNumber = 0;

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
	}
	else
		std::cout << "Plik nie poprawnie otwarty!!!\n";
}
