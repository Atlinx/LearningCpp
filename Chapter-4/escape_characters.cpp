#include <iostream>

int main()
{
	int_fast16_t fastest_int_in_the_west{ 50 };
	int_least8_t maybe_a_char{ 97 };
	unsigned int unsigned_integer{ 3024 };

	std::cout << "\n\n\n\nMaximum object type size: \t" << sizeof(size_t) << std::endl;
	std::cout << "\n\nHere are some integers: \n";
	std::cout << "fastest_int_in_the_west: \t" << fastest_int_in_the_west << '\n';
	std::cout << "unsigned_integer: \t\t" << unsigned_integer << '\n';
	std::cout << "maybe_a_char: \t\t\t" << maybe_a_char << '\n';
}