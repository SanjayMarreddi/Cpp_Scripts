#include <iostream>
using namespace std;
int main()

{

/*
Multi-Dimensional Arrays

A multi-dimensional array holds one or more arrays. Declare a multidimensional array as follows.
type name[size1][size2]...[sizeN];

Here, we've created a two-dimensional 3x4 integer array. Visualize this array as a table composed of 3 rows, and 4 columns.
Remember element counting always starts from 0.
*/

int name_of_array[3][4];

/*
Two-Dimensional Arrays

Multi-dimensional arrays may be initialized by specifying bracketed values for each row.
Following is an array with 2 rows and 3 columns:
int x[2][3] = {
  {2, 3, 4}, // 1st row
  {8, 9, 10} // 2nd row
};

You can also write the same initialization using just one row.
int x[2][3] = {{2, 3, 4}, {8, 9, 10}};

The elements are accessed by using the row index and column index of the array.
For example:
*/

int x[2][3] = {{2, 3, 4}, {8, 9, 10}};
cout << x[0][2] << endl;            //Outputs 4

/*
Multi-Dimensional Arrays

Arrays can contain an unlimited number of dimensions.  

string threeD[42][8][3];

The example above declares a three-dimensional array of strings. As we did previously, it's possible to use index numbers to
access and modify the elements. Arrays more than three dimensions are harder to manage.

*/

}