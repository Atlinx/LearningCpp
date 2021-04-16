#include <iostream>
#include "io.hpp"

int main() 
{	
    int firstNumber{readNumber()};
    int secondNumber{readNumber()};
    
    writeAnswer(firstNumber + secondNumber);

    return 0;   
}