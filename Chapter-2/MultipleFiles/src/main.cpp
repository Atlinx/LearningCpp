#include "HelloWorld.hpp"

int getInteger();

int main() 
{
    HelloWorld world;
    world.say();

    int x{ getInteger() };
	int y{ getInteger() };
 
	std::cout << x << " + " << y << " is " << x + y << '\n';
	
    return 0;
}