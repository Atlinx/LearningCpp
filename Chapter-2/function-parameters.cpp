#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    std::cout << "Enter a number: ";
    
    int input{};
    std::cin >> input;
    
    std::cout << "Double " << input << " is " << doubleNumber(input) << '\n';
    
    return 0;
}