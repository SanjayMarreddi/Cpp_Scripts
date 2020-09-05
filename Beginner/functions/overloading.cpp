#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Overloading

// Function overloading allows to create multiple functions with the same name, so long as they have different parameters.

// For example, you might need a printNumber() function that prints the value of its parameter.

void printNumber1(int a) { 
  cout << a;
}

// This is effective with integer arguments only. Overloading it will make it available for other types, such as floats.
void printNumber1(float a) { 
  cout << a;
}

// Now, the same printNumber() function name will work for both integers and floats.

// Function Overloading

// When overloading functions, the definition of the function must differ from each other by the types and/or the number of 
// arguments in the argument list.
// For example:

void printNumber(int x) {
    cout << "Prints an integer: " << x << endl;
}
void printNumber(float x) {
    cout << "Prints a float: " << x << endl;
}

int main() {
  int a = 16;
  float b = 54.541;
  printNumber(a);
  printNumber(b);
}

// As you can see, the function call is based on the argument provided. An integer argument will call the function
//  implementation that takes an integer parameter. A float argument will call the implementation taking a float parameter.


// You can not overload function declarations that differ only by return type.
// The following declaration results in an error.

// int printName(int a) { }
// float printName(int b) { }
// double printName(int c) { }

// Although each function uses the same name, the only difference from one to the other is the return type, which is not allowed.