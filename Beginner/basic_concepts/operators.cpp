/*
Assignment Operators

The simple assignment operator (=) assigns the right side to the left side.

C++ provides shorthand operators that have the capability of performing an operation and an assignment at the same time.

For example:

int x = 10;

x += 4; // equivalent to x = x + 4
x -= 5; // equivalent to x = x - 5
x *= 3; // equivalent to x = x * 3
x /= 2; // equivalent to x = x / 2
x %= 4; // equivalent to x = x % 4



Increment Operators

The increment operator is used to increase an integer's value by one, and is a commonly used C++ operator.

x++; //equivalent to x = x + 1

Ex:

int x = 11;
x++;
cout << x;      // Outputs 12


The increment operator has two forms, prefix and postfix.
++x; // prefix
x++; // postfix

Prefix increments the value, and then proceeds with the expression.
Postfix evaluates the expression and then performs the incrementing.

Prefix example:
x = 5;
y = ++x;            // x is 6, y is 6

Postfix example:
x = 5;
y = x++;            // x is 6, y is 5

The prefix example increments the value of x, and then assigns it to y.
The postfix example assigns the value of x to y, and then increments it


The decrement operator (--) works in much the same way as the increment operator, but instead of increasing the value, it decreases it by one.
--x; // prefix
x--; // postfix



*/

#include <iostream>
using namespace std;
int main()

{
    int a =3;
    int x = ++a ;
    
    
    cout << "a = 3 and x = ++a yields a = " << a << " and " << "x =" << x <<"\n";


    int b = 1;
    int y = b++;

    cout << "b =1 and y = b++ yields b = " << b << " and " << "y =" << y ;

}