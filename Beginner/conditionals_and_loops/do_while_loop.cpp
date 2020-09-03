/*
The do...while Loop

Unlike for and while loops, which test the loop condition at the top of the loop, the do...while loop checks its condition at the bottom of the loop. A do...while loop is similar to a while loop. The one difference is that the do...while loop is guaranteed to execute at least one time.

Syntax:

do {
   statement(s);
} while (condition);

Don't forget the semicolon after the while statement.

For example, you can take input from the user, then check it. If the input is wrong, you can take it again.

*/


#include <iostream>
using namespace std;
int main()

{
int num ;
cin >> num;

do { cout << num << endl ; num+=1;} while (num<6);


/*
If the condition evaluated to false, the statements in the do would still run once
The do...while loop executes the statements at least once, and then tests the condition.
The while loop executes the statement after testing condition.


// Ex:

int a = 42;
do {
  cout << a << endl;
  a++;
} while(a < 5);         // Outputs 42


As with other loops, if the condition in the loop never evaluates to false, the loop will run forever.

Always test your loops, so you know that they operate in the manner you expect.

*/


}