#include <iostream>
using namespace std;

// Default Values for Parameters

// When defining a function, you can specify a default value for each of the last parameters. If the corresponding argument is 
// missing when you call a function, it uses the default value.

// To do this, use the assignment operator to assign values to the arguments in the function definition, as shown in this example.

int sum(int a, int b=42) {
  int result = a + b;
  return (result);
}

// This assigns a default value of 42 to the b parameter. If we call the function without passing the value for the b parameter, 
// the default value will be used.

int main() {
  int x = 24;
  int y = 36;

  //calling the function with both parameters
  int result = sum(x, y);
  cout << result << endl;
  //Outputs 60

  //calling the function without b
  result = sum(x);
  cout <<  result << endl;
   //Outputs 66

  return 0;
}

int volume(int l=1, int w=1, int h=1) {
  return l*w*h;
}

void main_volume() {
  cout << volume() << endl;
  cout << volume(5) << endl;
  cout << volume(2, 3) << endl;
  cout << volume(3, 7, 6) << endl;
}


// As you can see, default parameter values can be used for calling the same function in different situations, 
// when one or more of its parameters are not used.