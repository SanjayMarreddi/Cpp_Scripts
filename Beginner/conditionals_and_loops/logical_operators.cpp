/*

Use logical operators to combine conditional statements and return True or  False.

&& ---> And --> In the AND operator, both operands must be true for the entire expression to be true
|| ---> Or  --> The OR  operator returns true if any one of its operands is true
!  ---> Not --> The logical NOT (!) operator works with just a single operand, reversing its logical state.
                Thus, if a condition is true, the NOT operator makes it false, and vice versa.


You can combine any number of logical OR statements you want.
In addition, multiple OR and AND statements may be chained together.

*/



#include <iostream>
using namespace std;
int main()

{
int age = 20;
int grade = 80;
            // Within a single if statement, logical operators can be used to combine multiple conditions.
if (age > 16 && age < 60 && grade > 50) {
  cout << "Accepted!" << endl;
}

/*
int age = 16;
int score = 90;
if (age > 20 || score > 50) {
    cout << "Accepted!" << endl;
}

// Outputs "Accepted!"



int age = 10;
if ( !(age > 16) ) {
  cout << "Your age is less than 16" << endl;
}
*/
// Outputs "Your age is less than 16"

}

/*
Be careful using this, because !false means true.
*/