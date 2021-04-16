#include <iostream>

int main()
{
    std::cout << "Type in an integer: ";
    int inputNumber{};
    std::cin >> inputNumber;
    std::cout << "Double " << inputNumber << " is " << inputNumber * 2 << '\n';
    std::cout << "Triple " << inputNumber << " is " << inputNumber * 3 << '\n'; 
    return 0;
}