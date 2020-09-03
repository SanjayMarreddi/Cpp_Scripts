/*
An if statement can be followed by an optional else statement, which executes when the condition is false.

Syntax:

if (condition) {
  //statements
}
else {
 //statements
}

The code above will test the condition:
- If it evaluates to true, then the code inside the if statement will be executed.
- If it evaluates to false, then the code inside the else statement will be executed.


*/

#include <iostream>
using namespace std;
int main()

{

int a,b;

cin >> a >> b;

    if (a<b) cout << a << "<" << b << "\n";     //When only one statement is used inside the if/else, then the curly braces can be omitted.
        else cout << a << ">" << b << "\n";


int mark = 90;

if (mark < 50) {
  cout << "You failed." << endl;            //  You may include as many statements as you want inside the { } of if and else loop
  cout << "Sorry" << endl;
}
else {
  cout << "Congratulations!" << endl;
  cout << "You passed." << endl;
  cout << "You are awesome!" << endl;
} 

/*
You can also include, or nest, if statements within another if statement.
*/

int mark ;
cin >> mark ;

if (mark>=50){

    if (mark==100){ cout << "Perfect!\n" ;}
    else{cout << "Congrats.\n"; }

    }
else{
    cout << "You Failed" << endl;
} 

/*

C++ provides the option of nesting an unlimited number of if/else statements.

Remember that all else statements must have corresponding if statements.

In if/else statements, a single statement can be included without enclosing it into curly braces.
Including the curly braces anyway is a good practice, as they clarify the code and make it easier to read.


*/



}