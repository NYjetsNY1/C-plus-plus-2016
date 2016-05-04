// Fun FizzBuzz Challenge
// Written by Ben Sklar
// Many ways to do this. This was a quick and fun test.
// Took me less than 60 seconds to devise the solution and code it.
// Comments took a couple minutes more than that.
#include <iostream>
using namespace std;

// Initial Declaration
void FizzBuzz();

// Definition
// An example of a Fizz-Buzz question is the following:
// Write a program that prints the numbers from 1 to 100.
// For multiples of three print “Fizz” instead of the number.
// For multiples of five print “Buzz” instead of the number.
// For numbers which are multiples of both three and five print “FizzBuzz”.
// instead of Fizz, Buzz, or the number.
void FizzBuzz() {
    for (size_t i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0 && i % 3 != 0) {
            cout << "Buzz" << endl;
        }
        else if (i % 5 == 0 && i % 3 == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 != 0 && i % 3 != 0) {
            cout << i << endl;
        }
    }
}


// Main Function
int main()
{
    // Call to FizzBuzz.
    FizzBuzz();
    // Good Style (avoid compiler errors or warnings) to
    // Return 0 in the main function which in C++ is "int main()".
    return 0;
}
