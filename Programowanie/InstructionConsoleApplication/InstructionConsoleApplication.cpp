
#include <iostream>


/*
Operatory warunkowe:
> - wiêksze
< - mniejsze
>= - wiêksze b¹dŸ równe
<= - mniejsze b¹dŸ równe
== - równe
!= - nie równe

Operatory logiczne:
&& - AND
|| - OR
! - NOT

a   b   a&&b    a||b    !a
F   F     F       F     T
T   F     F       T     T
F   T     F       T     F
T   T     T       T     F

F - false
T - true

*/

//Napisz program, który wyœwietli informacje, czy liczba jest dodatnia czy nie.

void task1()
{
	int number;
	std::cout << "Podaj liczbê: \n";
	std::cin >> number;

	if (number < 0)
		std::cout << "Liczba jest ujemna.\n";

	if (number > 0)
		std::cout << "Liczba jest dodatnia.\n";

	if (number == 0)
		std::cout << "Liczba jest równa 0.\n";
}

//Napisz program, który wyœwietli informacje, czy liczba jest parzysta czy nieparzysta.

void task2()
{
	int number;
	std::cout << "Podaj liczbê: \n";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << "Liczba jest parzysta.";
	else
		std::cout << "Liczba jest nieparzysta.";
}

//Napisz program, który wyœwietli informacje czy liczba z zakresu <1 , 10>

void task3()
{
	int number;
	std::cout << "Podaj liczbê: \n";
	std::cin >> number;

	if (number >= 1 && number < 10)
		std::cout << "Liczba jest z zakresu.";
	else
		std::cout << "Liczba nie jest z zakresu.";
}

//Napisz program, który wykona dzielenie dwóch liczb.

void task4()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz¹ liczbê: \n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug¹ liczbê: \n";
	std::cin >> secondNumber;

	if (secondNumber != 0)
	{
		int quoitent = firstNumber / secondNumber;
		std::cout << "Wynik dzielenia: " << quoitent << "\n";
	}
	else
		std::cout << "Dzielenie przez zero!!!\n";
}

//.Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.

void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê: \n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê: \n";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "Obie liczby s¹ równe.";
	else
		std::cout << "Obie liczby nie s¹ równe.";
}

//.Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia.Wyœwietl odpowiedni komunikat.

void task6()
{
	int age;
	std::cout << "Podaj wiek: \n";
	std::cin >> age;

	if (age >= 18)
		std::cout << "Dana osoba jest pe³noletnia.";
	else
		std::cout << "Dana osoba jest niepe³noletnia.";
}

//.Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹.Wyœwietl wynik.

void task7()
{
	int number;
	std::cout << "Podaj liczbê: \n";
	std::cin >> number;

	if (number < 0)
		std::cout << "Wartoœæ bezwzglêdna podanej liczby to: " << number * -1;
	else
		std::cout << "Wartoœæ bezwzglêdna podanej liczby to: " << number;
}

//.Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia

void task8()
{
	int number;
	std::cout << "Podaj liczbe: \n";
	std::cin >> number;

	if (number >= 1 && number <= 7)
	{
		if (number == 1)
			std::cout << "Dzieñ tygodnia to Poniedzia³ek.";
		if (number == 2)
			std::cout << "Dzieñ tygodnia to Wtorek.";
		if (number == 3)
			std::cout << "Dzieñ tygodnia to Œroda.";
		if (number == 4)
			std::cout << "Dzieñ tygodnia to Czwartek.";
		if (number == 5)
			std::cout << "Dzieñ tygodnia to Pi¹tek.";
		if (number == 6)
			std::cout << "Dzieñ tygodnia to Sobota.";
		if (number == 7)
			std::cout << "Dzieñ tygodnia to Niedziela.";
	}
	else
		std::cout << "Nie ma takiego dnia tygodnia.";

	switch (number)
	{
	case 1:
		std::cout << "Podniedzia³ek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "Œroda\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Pi¹tek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "Dzieñ niepoprawny\n";
	}
}

//.Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.

void task9()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz¹ liczbê: \n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug¹ liczbê: \n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << "Wiêksza liczba to: " << firstNumber;
	else
		std::cout << "Wiêksza liczba to: " << secondNumber;
}

//.Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny.Wyœwietl odpowiedni komunikat.

void task10()
{
	int year;
	std::cout << "Podaj rok: \n";
	std::cin >> year;

	if (year > 0 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << "Rok jest przestêpny.";
	else
		std::cout << "Rok nie jest przestêpny.";
}

//.Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.

void task11()
{
	int number;
	std::cout << "Podaj liczbê: \n";
	std::cin >> number;

	if (number % 3 == 0)
	{
		if (number % 5 == 0)
			std::cout << "Podana liczba dzieli siê przez 3 i 5.";
		else
			std::cout << "Podana liczba siê nie dzieli.";
	}
	else
		std::cout << "Podana liczba siê nie dzieli.";
}

/*Na  podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹
*/

void task12()
{
	int mass;
	double height, bmi;
	std::cout << "Podaj swoj¹ wysokoœæ w metrach: \n";
	std::cin >> height;
	std::cout << "Podaj swoj¹  w kilogramach: \n";
	std::cin >> mass;
	bmi = mass / (height * height);
	if (mass > 0 && height > 0)
	{
		if (bmi < 16)
			std::cout << "Z twojego BMI wychodzi wyg³odzenie";
		else
			if (bmi >= 16 && bmi <= 16.99)
				std::cout << "Z twojego BMI wychodzi wychudzenie";
			else
				if (bmi >= 17 && bmi <= 18.49)
					std::cout << "Z twojego BMI wychodzi niedowaga";
				else
					if (bmi >= 18.5 && bmi <= 24.99)
						std::cout << "Z twojego BMI wychodzi waga prawid³owa";
					else
						if (bmi >= 25.0 && bmi <= 29.99)
							std::cout << "Z twojego BMI wychodzi nadwaga";
						else
							if (bmi >= 30 && bmi <= 34.99)
								std::cout << "Z twojego BMI wychodzi I stopieñ oty³oœci";
							else
								if (bmi >= 35 && bmi <= 39.99)
									std::cout << "Z twojego BMI wychodzi II stopieñ oty³oœci";
								else
									if (bmi > 40)
										std::cout << "Z twojego BMI wychodzi oty³oœæ skrajna";
	}
	else
		std::cout << "Jedna z podanych wartoœci jest ujemna.";
}

//* .Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t.Wyœwietl odpowiedni komunikat.

void task13()
{
	int firstSide, secondSide, thirdSide;
	std::cout << "Podaj d³ugoœæ pierwszego boku trójk¹ta: \n";
	std::cin >> firstSide;
	std::cout << "Podaj d³ugoœæ drugiego boku trójk¹ta: \n";
	std::cin >> secondSide;
	std::cout << "Podaj d³ugoœæ trzeciego boku trójk¹ta: \n";
	std::cin >> thirdSide;
	if (firstSide > (secondSide + thirdSide) || secondSide > (firstSide + thirdSide) || thirdSide > (firstSide + secondSide))
		std::cout << "Mo¿na zbudowaæ trójk¹t.";
	else
		std::cout << "Nie mo¿na zbudowaæ trójk¹ta.";
}

//* .Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe.Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.

void task14()
{
	int number, root;
	std::cout << "Podaj liczbê: \n";
	std::cin >> number;
	root = sqrt(number);

	if (number > 0)
	{
		std::cout << "Pierwiastek kwadratowy podanej liczby to: " << root;
	}
	else
		std::cout << "Nie da siê obliczyæ pierwiastka liczby ujemnej.";
}

//* .Program sprawdzaj¹cy czy podana data jest poprawna(np.sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)

void task15()
{
	int dayNumber, monthNumber, yearNumber;
	std::cout << "Podaj dzieñ: \n";
	std::cin >> dayNumber;
	std::cout << "Podaj miesi¹c: \n";
	std::cin >> monthNumber;
	std::cout << "Podaj rok: \n";
	std::cin >> yearNumber;

	if (dayNumber >= 1 && dayNumber <= 31
		&& monthNumber >= 1 && monthNumber <= 12
		&& yearNumber != 0

		&& ((monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) && dayNumber != 31)

		&& monthNumber == 2 && (dayNumber >= 28
			|| dayNumber == 29 && (yearNumber % 4 == 0 && yearNumber % 100 != 0 && yearNumber % 400 == 0))
		)
		std::cout << "Data jest poprawna.";
	else
		std::cout << "Data nie jest poprawna.";
}

//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. Zabezpiecz program przed pobraniem liczby ujemnej.

void task16()
{
	int number;
	std::cout << "Podaj liczbê: \n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj liczbê: \n";
		std::cin >> number;
	}
	else
		std::cout << "Liczba dodatnia pobrana od u¿ytkownika: " << number << "\n";
	

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task16();
}