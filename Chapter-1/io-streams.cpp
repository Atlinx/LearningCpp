#include <iostream>

int main()
{
    int uninitializedVariable;

    std::cout << "Uninitialized variable: " << uninitializedVariable << '\n';

    std::cout << "Concat "
              << "multiple "
              << "strings" << std::endl;
    std::cout << "Newline strings" << '\n';
    std::cout << "Another new line"
              << "\n\n";

    std::cout << "Enter a number: \n";
    int userInput{};
    std::cin >> userInput;
    std::cout << "You entered: " << userInput << '\n';

    return 0;
}