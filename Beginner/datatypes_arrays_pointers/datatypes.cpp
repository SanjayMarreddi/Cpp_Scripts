/*
Data Types

The operating system allocates memory and selects what will be stored in the reserved memory based on the variable's data type.
The data type defines the proper use of an identifier, what kind of data can be stored, and which types of operations can be performed.
There are a number of built-in types in C++.

Expressions :-

The examples below show legal and illegal C++ expressions.

55+15 //  legal C++ expression
      //  Both operands of the + operator are integers

55 + "John" // illegal
            // The + operator is not defined for integer and string

You can implement some logic for illegal expressions by overloading operators

Numeric Data Types :-

Numeric data types include:
Integers (whole numbers), such as -7, 42.
Floating point numbers, such as 3.14, -42.67.

Strings & Characters :-

A string is composed of numbers, characters, or symbols. String literals are placed in double quotation marks;
Some examples are "Hello", "My name is David", and similar.

Characters are single letters or symbols, and must be enclosed between single quotes, like 'a', 'b', etc.

In C++, single quotation marks indicate a character; double quotes create a string literal.
We can say "string" is an ordered sequence of "characters" 
While 'a' is a single a character literal, "a" is a string literal. (UNLIKE PYTHON where "a" and 'a' are treated the same and have type {str} )

Booleans :-

The Boolean data type returns just two possible values: true (1) and false (0).
Conditional expressions are an example of Boolean data type.

*/

#include <iostream>
using namespace std;
int main()
{

while(true){cout << "true";
        break;}



/*
Integers :- 

The integer type holds non-fractional numbers, which can be positive or negative. 
Examples of integers would include 42, -42, and similar numbers.
The size of the integer type varies according to the architecture of the system on which the program runs, 
although 4 bytes is the minimum size in most modern system architectures.

Integers

Use the int keyword to define the integer data type.

int a = 42;

Several of the basic types, including integers, can be modified using one or more of these type modifiers:

signed: A signed integer can hold both negative and positive numbers.
unsigned: An unsigned integer can hold only positive values.
short: Half of the default size.
long: Twice the default size.

For example:

unsigned long int a;

The integer data type reserves 4-8 bytes depending on the operating system. */


long unsigned int a = 10;
short signed int b = 10;


/*
Floating Point Numbers

A floating point type variable can hold a real number, such as 420.0, -3.33, or 0.03325.
The words floating point refer to the fact that a varying number of digits can appear before and after the decimal point.
You could say that the decimal has the ability to "float".

There are three different floating point data types: float, double, and long double.

In most modern architectures, a float is 4 bytes, a double is 8, and a long double can be equivalent to a double (8 bytes), or 16 bytes.
For example:

double temp = 4.21;

Floating point data types are always signed, which means that they have the capability to hold both positive and negative values.*/

float c = 3.33;
double d = 3.33;
long double e = 3.33 ;

cout << a << b << c << d << e;


/*
Strings

A string is an ordered sequence of characters, enclosed in double quotation marks.
It is part of the Standard Library.
You need to include the <string> library to use the string data type. Alternatively, you can use a library that includes the string library.
The <string> library is included in the <iostream> library, so you don't need to include <string> separately, if you already use <iostream>.


#include <string>
using namespace std;

*/

  string hello = "I am learning C++";
  cout << hello ;


/*
Characters

A char variable holds a 1-byte integer. However, instead of interpreting the value of the char as an integer, 
the value of a char variable is typically interpreted as an ASCII character.
A character is enclosed between single quotes (such as 'a', 'b', etc).
American Standard Code for Information Interchange (ASCII) is a character-encoding scheme that is used to represent text in computers.
*/

char test = 'S';
cout << test << endl ;



/*
Booleans

Boolean variables only have two possible values: true (1) and false (0).
To declare a boolean variable, we use the keyword bool.

*/


bool  test_1 , test_2 ;

// If an integer value is assigned to a Boolean, 0 becomes false and any value that has a non-zero value becomes true. 

test_1 = 5 ;     
cout << "bool_test_1" << "  " << test_1 << "\n" ;  // outputs  1 as 5 is treated as True

test_2 = 0 ;  
cout << "bool_test_2" << "  " << test_2 << "\n" ; // outputs  0 as 0 is treated as False


// If a Boolean value is assigned to an integer, true becomes 1 and false becomes 0.
bool test_3 = true;
int num = test_3 ;
cout << "bool_test_3" << "  " << num << "\n" ; 


bool test_4 = false;
int num_2 = test_4 ;
cout << "bool_test_4" << "  " << num_2 << "\n" ; 


}


