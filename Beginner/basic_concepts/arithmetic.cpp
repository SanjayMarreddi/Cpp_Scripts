/*
C++ supports these arithmetic operators. (+,-,*,/,% :- similar to python)
You can use multiple arithmetic operators in one line.

Ex:

int x = 40 + 60;
cout << x;              // Outputs 100


int x = 10 / 3;
cout << x;              // Outputs 3



Note:

The division operator divides the first operand by the second. Any remainder is dropped in order to return an integer value.

If one or both of the operands are floating point values, the division operator performs floating point division.

Dividing by 0 will crash your program.

The modulus operator (%) is informally known as the remainder operator because it returns the remainder after an integer division.

*/


#include <iostream>
using namespace std;
int main()
{
int x =10/3 ;
float y = 10.0/3;       
cout << x << endl << y << endl << (100.0/3) ;

}


/*
Operator precedence determines the grouping of terms in an expression, which affects how an expression is evaluated.
Certain operators take higher precedence over others; for example, the multiplication operator has higher precedence over the 
addition operator.

As in mathematics, using parentheses alters operator precedence.

Parentheses force the operations to have higher precedence. If there are parenthetical expressions nested within one another,
the expression within the innermost parentheses is evaluated first.

If none of the expressions are in parentheses, multiplicative (multiplication, division, modulus) operators will be evaluated before 
additive (addition, subtraction) operators.

*/