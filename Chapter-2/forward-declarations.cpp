#include <iostream>

int addNumbers(int x, int y, int z);

int getNumberInput()
{
    std::cout << "Enter a number: ";
    
    int input{};
    std::cin >> input;
    
    return input;
}

int main()
{
    int numA{getNumberInput()};
    int numB{getNumberInput()};
    int numC{getNumberInput()};

    std::cout << numA << " + " << numB << " + " << numC << " = " << addNumbers(numA, numB, numC);
}

int addNumbers(int x, int y, int z)
{
    return x + y + z;
}