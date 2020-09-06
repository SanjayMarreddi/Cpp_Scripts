// Exceptions

// Problems that occur during program execution are called exceptions.
// In C++ exceptions are responses to anomalies that arise while the program is running, such as an attempt to divide by zero.

// Throwing Exceptions

// C++ exception handling is built upon three keywords: try, catch, and throw.
// throw is used to throw an exception when a problem shows up.
// For example:

#include <iostream>
using namespace std;

int main1()
{
int motherAge1 = 29;
int sonAge1 = 36;
if (sonAge1 > motherAge1) {
  throw "Wrong age values";
}
return 0;
}

// The code looks at sonAge and motherAge, and throws an exception if sonAge is found to be the greater of the two.

// In the throw statement, the operand determines a type for the exception. This can be any expression. The type of the expression's
// result will determine the type of the exception thrown.


// Catching Exceptions

// A try block identifies a block of code that will activate specific exceptions. 
// It's followed by one or more catch blocks. The catch keyword represents a block of code that executes when a particular exception is thrown.
// Code that could generate an exception is surrounded with the try/catch block.
// You can specify what type of exception you want to catch by the exception declaration that appears in parentheses following the keyword catch.

// For example:
int main()
{

// main1() ;            // Note that once an exception is Thrown, Program Stops Execution 

try {
  int motherAge = 29;
  int sonAge = 36;
  if (sonAge > motherAge) {
   throw 99;
  }
} 
catch (int x) {
  cout<<"Wrong age values - Error "<<x;
}
}
//Outputs "Wrong age values - Error 99"


// The try block throws the exception, and the catch block then handles it.
// The error code 99, which is an integer, appears in the throw statement, so it results in an exception of type int.
// Multiple catch statements may be listed to handle various exceptions in case multiple exceptions are thrown by the try block.