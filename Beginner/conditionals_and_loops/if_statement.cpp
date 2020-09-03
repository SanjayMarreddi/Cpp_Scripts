#include <iostream>
using namespace std;

/*
Decision Making:  The if statement is used to execute some code if a condition is true.

Syntax:

if (condition) {
   statements
}

The condition specifies which expression is to be evaluated. If the condition is true, the statements in the curly brackets are executed.

If the condition is false, the statements are simply ignored, and the program continues to run after the if statements body.

Use relational operators to evaluate conditions. 

** A condition specified in an if statement does not require a semicolon.

Additional relational operators:- ==, !=, >=, <= have similar functionality like python

The not equal to (!=) operator evaluates the operands, determines whether or not they are equal. If the operands are not equal, the condition is evaluated to true.

*/

int main()
{

if (7>4){
    cout << "Yes" ;
}

if (10 == 10) {
  cout <<  "Yes";
}

if (10 != 10) {
  cout <<  "Yes";
}

int a = 55;     // You can use relational operators to compare variables in the if statement.
int b = 33;
if (a > b) {
  cout << "a is greater than b";
}


}
