#include <iostream>
#include <cstdlib>

int getUserNumberInput()
{
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    std::cout << "Return code: ";
    int returnCode{getUserNumberInput()};    
    return returnCode;
}