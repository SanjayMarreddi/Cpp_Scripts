/*
Loops

A loop repeatedly executes a set of statements until a particular condition is satisfied.
A while loop statement repeatedly executes a target statement as long as a given condition remains true.

Syntax:

while (condition) {
   statement(s);
}

The loop iterates while the condition is true.
At the point when the condition becomes false, program control is shifted to the line that immediately follows the loop.

The loop's body is the block of statements within curly braces.

Without a statement that eventually evaluates the loop condition to false, the loop will continue indefinitely.

*/

#include <iostream>
using namespace std;

int main()
{

int num = 1;

while(num<=6){
    cout << num << endl ;  // Note that incrementing is done inside the { } of while loop.The increment value can be changed like (num+=3). If changed, the number of times the loop is run will change, as well. 
    num+=1;}


/*
A loop can be used to obtain multiple inputs from the user.
Let's create a program that allows the user to enter a number 5 times, each time storing the input in a variable.
*/

int n = 1;
int total=0;
int number;
while (n<=5){
    cin >> number;          // This code asks for user input 5 times and sums the numbers entered.
    n++;
    total+=number;
}

cout << total;


}

/*
The increment or decrement operators can also be used to change values in the loop. 

*/