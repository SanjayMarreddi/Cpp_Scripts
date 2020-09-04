/*
Arrays

An array is used to store a collection of data, but it may be useful to think of an array as a collection of variables that 
are all of the same type. Instead of declaring multiple variables and storing individual values, you can declare a single array
to store all the values. When declaring an array, specify its element types, as well as the number of elements it will hold.

For example: */

#include <iostream>
using namespace std;
int main()
{

int name_of_array[5];

/*
In the example above, variable name_of_array was declared as an array of five integer values [specified in square brackets].
You can initialize the array by specifying the values it holds: */

int b[5] = {11, 45, 62, 70, 88};

/*
The values are provided in a comma separated list, enclosed in {curly braces}.
The number of values between braces { } must not exceed the number of the elements declared within the square brackets [ ].

Initializing Arrays :-

If you omit the size of the array, an array just big enough to hold the initialization is created.

For example:
int b[] = {11, 45, 62, 70, 88};

This creates an identical array to the one created in the previous example.

Each element, or member, of the array has an index, which pinpoints the element's specific position.
The array's first member has the index of 0, the second has the index of 1.  (SIMILAR TO PYTHON )

To access array elements, index the array name by placing the element's index in square brackets following the array name.
For example: */

int c[] = {11, 45, 62, 70, 88};

cout << c[0] << endl;
// Outputs 11

cout<< c[3] << endl;
// Outputs 70

// Accessing Array Elements

// Index numbers may also be used to assign a new value to an element.

float d[] = {11.1, 45, 62, 70, 88};
d[2] = 42; // Replacing
cout << d[0] << d[2] << d[4] << d[5] ; // as d[5] is absent it gave 0.

/*
This assigns a value of 42 to the array's third element.
Always remember that the list of elements always begins with the index of 0.
*/

}
