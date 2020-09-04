
#include <iostream>
using namespace std;
int main()
{

/*
Pointers

Every variable is a memory location, which has its address defined.
That address can be accessed using the ampersand (&) operator (also called the address-of operator), which denotes an address in memory.

A pointer is a variable, with the address of another variable as its value.

In C++, pointers help make certain tasks easier to perform. Other tasks, such as dynamic memory allocation, cannot be
performed without using pointers.

All pointers share the same data type - a long hexadecimal number that represents a memory address.
The only difference between pointers of different data types is the data type of the variable that the pointer points to.

For example: */

int score2 = 5;
cout << &score2 << endl; //Outputs "0x29fee8"   This outputs the memory address, which stores the variable score.]

float mynum = 100.0 ;
cout << &mynum << endl ;
 

// A pointer is a variable, and like any other variable, it must be declared before you can work with it.
// The asterisk sign is used to declare a pointer (the same asterisk that you use for multiplication), however,
// in this statement the asterisk is being used to designate a variable as a pointer.
// Following are valid pointer declarations:

int *ip;  // pointer to an integer
double *dp;   // pointer to a double
float * fp;  // pointer to a float
char* ch;  // pointer to a character

// Just like with variables, we give the pointers a name and define the type, to which the pointer points to.
// The asterisk sign can be placed next to the data type, or the variable name, or in the middle.

// Using Pointers

// Here, we assign the address of a variable to the pointer.

int score = 5;
int*  scorePtr;
scorePtr = &score;

cout << scorePtr << endl;


// The code above declares a pointer to an integer called scorePtr, and assigns to it the memory location of the
// score variable using the ampersand (address-of) operator. Now, scorePtr's value is the memory location of score.


// Pointer Operations

// There are two operators for pointers:
// Address-of operator (&): returns the memory address of its operand.
// Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.


int var = 50;
int  *p1;
p1 = &var;

cout << var << endl;
// Outputs 50 (the value of var)

cout << p1 << endl;
// Outputs 0x29fee8 (var's memory location)

cout << *p1 << endl;
// Outputs 50 (the value of the variable stored in the pointer p)


// The asterisk (*) is used in declaring a pointer for the simple purpose of indicating that it is a pointer
//  (The asterisk is part of its type compound specifier). Don't confuse this with the dereference operator, which is used to obtain the value 
//  located at the specified address. They are simply two different things represented with the same sign.


// Dereferencing

// The dereference operator (*) is basically an alias for the variable the pointer points to.
// For example:

int x = 5;
int *p = &x;

x = x + 4;
x = *p + 4;
*p = *p + 4;

// All three of the preceding statements are equivalent, and return the same result. We can access the variable by dereferencing the 
// variable's pointer. As p is pointing to the variable x, dereferencing the pointer (*p) is representing exactly the same as the variable x.

}