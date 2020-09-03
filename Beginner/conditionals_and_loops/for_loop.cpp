/*
A for loop is a repetition control structure that allows you to efficiently write a loop that executes a specific number of times.

Syntax:

for ( init; condition; increment ) {
  statement(s);
}

The init step is executed first, and does not repeat.
Next, the condition is evaluated, and the body of the loop is executed if the condition is true.
In the next step, the increment statement updates the loop control variable.
Then, the loop's body repeats itself, only stopping when the condition becomes false.

*/

#include <iostream>
using namespace std;

int main()

{

for (int x = 1; x < 10; x++) {
 cout << x << endl ;
 }

cout << "\n\n" ;

int a =1;

// Equivalent to while (a<10){}
for (; a < 10; ) {      
                    //The init and increment statements may be left out, if not needed, but remember that the semicolons are mandatory.
 cout << a << endl  ;
 a++;
 }

}


/*
It's possible to change the increment statement, like x+=5 .
You can also use decrement in the statement, like x-=4 .
When using the for loop, don't forget the semicolon after the init and condition statements.
*/