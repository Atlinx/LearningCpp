#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    
    int inputNumberOne{};
    std::cin >> inputNumberOne;

    std::cout << "Enter another integer: ";

    int inputNumberTwo{};
    std::cin >> inputNumberTwo;

    std::cout << inputNumberOne << " + " << inputNumberTwo << " is " << inputNumberOne + inputNumberTwo << '\n';
    std::cout << inputNumberOne << " - " << inputNumberTwo << " is " << inputNumberOne - inputNumberTwo << '\n';

    return 0;
}