// Arrays and Functions

// An array can also be passed to a function as an argument.
// The parameter should be defined as an array using square brackets, when declaring the function.
// For example:


#include <iostream>
using namespace std;

// int arr[4]={1,2,3,4} ;       // We can define arrays or Numbers outside a function too

void printArray(int arr[], int size) {
  for(int x=0; x<size; x++) {
    cout <<arr[x]<< endl;
  }
}
int main() {
  int myArr[3]= {42, 33, 88};
  printArray(myArr, 3);
}

// The printArray function takes an array as its parameter (int arr[]), and iterates over the array using a for loop.
// We call the function in main(), which is where we pass the myArr array to the function, which prints its elements.
// Remember to specify the array's name without square brackets when passing it as an argument to a function.