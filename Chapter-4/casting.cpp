#include <iostream>

int main()
{
	std::cout << "Enter a character: ";
	char input_char{ };
	std::cin >> input_char;
	std::cout << "Your character is '" << input_char << "' with a number of '" << static_cast<int>(input_char) << "'";
	return 0;
}