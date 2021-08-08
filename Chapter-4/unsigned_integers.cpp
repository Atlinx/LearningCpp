#include <iostream>

int main()
{
	unsigned short some_positive_short{65535};

	std::cout << "This is an unsigned short: " << some_positive_short << "\n";

	some_positive_short = 65535 + 400;

	std::cout << "Here it is again but overflowing: " << some_positive_short;
	
	return 0;
}