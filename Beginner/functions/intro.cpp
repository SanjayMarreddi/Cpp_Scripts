#include <iostream>
using namespace std;

// Functions

// A function is a group of statements that perform a particular task.
// You may define your own functions in C++.

// Using functions can have many advantages, including the following:
// - You can reuse the code within a function.
// - You can easily test individual functions.
// - If it's necessary to make any code modifications, you can make modifications within a single function, without altering 
//   the program structure.
// - You can use the same function for different inputs.

// Every valid C++ program has at least one function - the main() function.


// The Return Type

// The main function takes the following general form:

// int main()
// {
//   // some code
//   return 0;
// }

// A function's return type is declared before its name. In the example above, the return type is int, which indicates that the function
// returns an integer value.
// Occasionally, a function will perform the desired operations without returning a value. Such functions are defined with the keyword void.
// void is a basic data type that defines a valueless state.



// Defining a Function

// Define a C++ function using the following syntax:

// return_type function_name( parameter list )
// {
//    body of the function
// }

// return-type: Data type of the value returned by the function.
// function name: Name of the function.
// parameters: When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument.

// The parameter list refers to the type, order, and number of the parameters of a function.
// body of the function: A collection of statements defining what the function does.
// Parameters are optional; that is, you can have a function with no parameters.    


// Defining a Function

// As an example, let's define a function that does not return a value, and just prints a line of text to the screen.


// void printSomething() 
// {
//   cout << "Hi there!";
// }

// Our function, entitled printSomething, returns void, and has no parameters.
// Now, we can use our function in main().

// int main() 
// {
//    printSomething();
   
//    return 0;
// }

// To call a function, you simply need to pass the required parameters along with the function name.

// You must declare a function prior to calling it. Putting the declaration of function used in main() after the main() function 
// results in an error.



// A function declaration, or function prototype, 
// tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately.

// For example:

#include <iostream>
using namespace std;

//Function declaration
void printSomething();

int main() {
  printSomething();

  return 0;
}

//Function definition
void printSomething() {
  cout << "Hi there! How are you ?";
}



// Function declaration is required when you define a function in one source file and you call that function in another file.
//  In such case, you should declare the function at the top of the file calling the function.