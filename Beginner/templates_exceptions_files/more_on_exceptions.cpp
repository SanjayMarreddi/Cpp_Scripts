// Exception Handling

// Exception handling is particularly useful when dealing with user input.
// For example, for a program that requests user input of two numbers, and then outputs their division, be sure that you handle
// division by zero, in case your user enters 0 as the second number.

#include <iostream>
using namespace std;

// int main() {
//   int num1;
//   cout <<"Enter the first number:";
//   cin >> num1;

//   int num2;
//   cout <<"Enter the second number:";
//   cin >> num2;

//   cout <<"Result:"<<num1 / num2;
// }


// This program works perfectly if the user enters any number besides 0.
// In case of 0 the program crashes, so we need to handle that input.


// In the event that the second number is equal to 0, we need to throw an exception.

// int main() {
//   int num1;
//   cout <<"Enter the first number:";
//   cin >> num1;

//   int num2;
//   cout <<"Enter the second number:";
//   cin >> num2;

//   if(num2 == 0) {
//    throw 0;
//   } 

//   cout <<"Result:"<<num1 / num2;  
// }

// Now we need to handle the thrown exception using a try/catch block.

int main() 
{
 try {
  int num1;
  cout <<"Enter the first number:";
  cin >> num1;

  int num2;
  cout <<"Enter the second number:";
  cin >> num2;

  if(num2 == 0) {
   throw 0;
  } 

  cout <<"Result:"<<num1 / num2; 
 }

 catch(int x) {
  cout <<"Division by zero!";
 }
}

// This results in the output of "Division by zero!" as an alternative to a program crash, when 0 is entered as the second number.

// In our case, we catch exceptions of type integer only. It's possible to specify that your catch block handles 
// any type of exception thrown in a try block. To accomplish this, add an ellipsis (...) between the parentheses of catch:

// try {
//   // code
// } catch(...) {
//   // code to handle exceptions
// }
