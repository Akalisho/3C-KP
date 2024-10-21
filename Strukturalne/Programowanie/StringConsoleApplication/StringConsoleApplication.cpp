
#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "polish");
    std::string text;

    text = "Whats up";
    std::cout << "Nasz tekst na początku: " << text << "\n";
    std::cout << "Długość łańcucha to: " << text.length() << "\n";
    std::cout << "Czy zmienna jest pusta: " << text.empty() << "\n";
    text.append("my nigga!");
    std::cout << "Nasz tekst na: " << text << "\n";
}
