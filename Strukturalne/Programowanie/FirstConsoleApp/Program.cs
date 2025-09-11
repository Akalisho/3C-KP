Console.Write("Hello, Monkey!");
Console.WriteLine("Hello, World!");
string name = "6";
string surname = "7";
Console.WriteLine("Mangos " + name + "-" + surname + " Mustard");
Console.WriteLine("Witaj {0} {1} tutaj!!!!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!!!!");

Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga liczba to {secondNumber}");

//------------------------------------------------------------
//Przekazywanie przez wartość

void ParametrTest_v1(int p)
{
    Console.WriteLine($"Parametr w ParametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrTest_v1 {p}");
}

void ParametrTest_v2(ref int p)
{
    Console.WriteLine($"Parametr w ParametrTest_v2 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrTest_v2 {p}");
}

void ParametrTest_v3(ref int p)
{
    //Console.WriteLine($"Parametr w ParametrTest_v2 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrTest_v2 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//ParametrTest_v1(99);

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrTest_v2(ref firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//ParametrTest_v2(99);

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrTest_v3(ref firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//ParametrTest_v3(99);