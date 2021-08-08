#include <iostream>
#include <string>

std::string global_string{ "Mr. Worldwide." };

int main()
{
	std::string one_string{ "One string " };
	std::string two_string{ "Two string " };
	std::string together = one_string + two_string;

	std::cout << "Strings together: " << together << '\n';

	std::cout << "Enter a number:" << '\n';
	int number{ };
	std::cin >> number;
	std::cout << "Your number is: " << number << ".";
	std::cout << '\n';

	std::cout << "Enter a sentence:" << '\n';
	std::string input{ };
	std::getline(std::cin >> std::ws, input);
	std::cout << '\n';
	
	std::cout << "Your sentence was: " << '\n' << input << '\n';
	std::cout << "Your sentence is " << input.length() << " characters long."

	return 0;
}