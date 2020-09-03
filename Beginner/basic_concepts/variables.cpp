/*

Creating a variable reserves a memory location, or a space in memory for storing values. The compiler requires that you provide a data type for each variable you declare.

C++ offer a rich assortment of built-in as well as user defined data types.

Integer, a built-in type, represents a whole number value. Define integer using the keyword int.

C++ requires that you specify the type and the identifier for each variable defined.

An "identifier" is a name for a variable, function, class, module, or any other user-defined item. An identifier starts with a letter (A-Z or a-z) or an underscore (_), followed by additional letters, underscores, and digits (0 to 9).

Different operating systems can reserve different sizes of memory for the same data type.

*/

/*
#include <iostream>
using namespace std;

int main()
{
   int myVariable = 10;
   cout << myVariable; // Outputs 10

    int a= 30, b=15 ;     // defines two variables of type int
                            // int a = 30; 
                            // int b = 15; 
    int sum = a + b; // Now sum equals 45
    cout << sum ; // Outputs 45 
   return 0;
}

*/

/*

The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.

Define all variables with a name and a data type before using them in a program. In cases in which you have multiple variables of the same type, it's possible to define them in one declaration, separating them with commas.

A variable can be assigned a value, and can be used to perform operations. For example, we can create an additional variable called sum, and add two variables together.

Always keep in mind that all variables must be defined with a name and a data type before they can be used.

*/


/*
You have the option to assign a value to the variable at the time you declare the variable or to declare it and assign a value later.
You can also change the value of a variable.
You can assign a value to a variable only in a declared data type.


To enable the user to input a value, use cin in combination with the extraction operator (>>). The variable containing the extracted data follows the operator.

As with cout, extractions on cin can be chained to request more than one input in a single statement: cin >> a >> b;

You can accept user input multiple times throughout the program:

*/


// Let's create a program that accepts the input of two numbers and prints their sum

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  int sum;
  cout << "Enter a number \n";
  cin >> a;
  cout << "Enter another number \n";
  cin >> b;
  sum = a + b;
  cout << "Sum is: " << sum << endl;

   return 0;
}

/* 

Note that we can have only one int main() being declared 

Specifying the data type is required just once, at the time when the variable is declared.
After that, the variable may be used without referring to the data type.
Specifying the data type for a given variable more than once results in a syntax error.

A variable's value may be changed as many times as necessary throughout the program.

Ex: 

int a = 100;
a = 50;
cout << a;   // Outputs 50

int a =15
int b =a
cout << a+b   // Outputs 30

*/



