#include <iostream>
using namespace std;
int main()

{

/*
Arrays in Loops

It's occasionally necessary to iterate over the elements of an array, assigning the elements values based on certain calculations.
Usually, this is accomplished using a loop.

Let's declare an array, that is going to store 5 integers, and assign a value to each element using the for loop: */

int myArr[5];

for(int x=0; x<5; x++) {
  myArr[x] = 100;
  cout << x << ": " << myArr[x] << endl ;

}

/*

Each element in the array is assigned the value of 1.
The x variable in the for loop is used as the index for the array.
The last index in the array is 4, so the for loop condition is x<5.

 */


int arr[10] ={1,2,3,4,5,6} ; // If number of elements supplied are less than number specified , It keeps "0" .
int x ;
int sum ;

for ( x =0; x<6 ; x++) {    // In the array, the first element's index is 0, so the for loop initializes the x variable to 0.
sum+= arr[x] ;
}
cout << "\nSum : "  << sum  ;


}