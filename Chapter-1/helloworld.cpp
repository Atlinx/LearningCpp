#include <iostream>
 
int main()
{
    // Testing out comments!
    /*
     * This is a multiline
     * comment!
     */
    int a;
    int b, c;
    int copyIntialized = 0;
    int directInitialized( 50 );
    int listInitialized{ 50 };
    int directRounding( 50.4 );
    // Throws an error
    // int listRounding{ 50.4 };
	std::cout << "Hello, world!";
	return 0;
}