#include <iostream>

#define OBJECT_LIKE_MACRO "I'm a replacement"
#define EMPTY_OBJECT_MACRO

int main()
{
#ifdef EMPTY_OBJECT_MACRO
    std::cout << "EMPTY_OBJECT_MACRO exists!" << '\n';
#endif
    std::cout << "Macro Text: " << OBJECT_LIKE_MACRO << '\n';
    return 0;
}