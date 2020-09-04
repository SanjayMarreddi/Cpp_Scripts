// Function Parameters

// For a function to use arguments, it must declare formal parameters, which are variables that accept the argument's values.

// For example:

// void printSomething(int x) 
// {
//    cout << x;
// }

// This defines a function that takes one integer parameter and prints its value.
// Formal parameters behave within the function similarly to other local variables.
// They are created upon entering the function, and are destroyed upon exiting the function


// Once parameters have been defined, you can pass the corresponding arguments when the function is called.
// For example:

#include <iostream>
using namespace std;

void printSomething(int x) {
  cout << x;
}

int timesTwo(int x) {
   return x*2; 
}

int main() {
  printSomething(42);

   cout << timesTwo(8);
  // Outputs 16

  cout <<timesTwo(5);
  // Outputs 10

  cout <<timesTwo(42);
  // Outputs 84


  //You can pass different arguments to the same function.


// The value 42 is passed to the function as an argument, and is assigned to the formal parameter of the function: x.
// Making changes to the parameter within the function does not alter the argument.

}

// Multiple Parameters

// You can define as many parameters as you want for your functions, by separating them with commas.
// Data type and name should be defined for each parameter.
// You can also assign the returned value by a function to a variable.
// You can add as many parameters to a single function as you want.
// If you have multiple parameters, remember to separate them with commas, both when declaring them and when passing the arguments.


int addNumbers(int x, int y) {
  int result = x + y;
  return result;
}


