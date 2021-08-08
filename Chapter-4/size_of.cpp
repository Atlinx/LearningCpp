#include <iostream>
#include "stdint.h"

int main() 
{
	std::cout << "Size of char: \t\t\t" 				<< sizeof(char)					<< " bytes\n";
	std::cout << "Size of short: \t\t\t" 				<< sizeof(short)				<< " bytes\n";
	std::cout << "Size of int: \t\t\t" 					<< sizeof(int)					<< " bytes\n";
	std::cout << "Size of long: \t\t\t" 				<< sizeof(long)					<< " bytes\n";
	std::cout << "Size of long long: \t\t" 				<< sizeof(long long)			<< " bytes\n";
	std::cout << "Size of float: \t\t\t" 				<< sizeof(float)				<< " bytes\n";
	std::cout << "Size of unsigned short: \t" 			<< sizeof(unsigned short)		<< " bytes\n";
	std::cout << "Size of unsigned int: \t\t" 			<< sizeof(unsigned int)			<< " bytes\n";
	std::cout << "Size of unsigned long: \t\t" 			<< sizeof(unsigned long)		<< " bytes\n";
	std::cout << "Size of unsigned long long: \t"		<< sizeof(unsigned long long)	<< " bytes\n";
}