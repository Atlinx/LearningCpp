#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your name: ";
	std::string name{ };
	std::getline(std::cin >> std::ws, name);
	std::cout << '\n';
	
	std::cout << "Enter your age: ";
	int age{ };
	std::cin >> age;

	std::cout << "You've lived for " << name.length() / static_cast<double>(age) << " years for each letter in your name.";
}