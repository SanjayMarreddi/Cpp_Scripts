// Operator Overloading

// Most of the C++ built-in operators can be redefined or overloaded.

// Thus, operators can be used with user-defined types as well (for example, allowing you to add two objects together).

// Operators that can't be overloaded include :: | .* | . | ?:

// Use the Below link for More details on Operators which can be Overloaded and which can't be overloaded
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Operators/Operator_Overloading#:~:text=Member%20Reference%20operatorsEdit,not%20a%20common%20programming%20technique.

// Let's declare a sample class to demonstrate operator overloading:

// class MyClass {
//  public:
//   int var;
//   MyClass() {}   // 1st Constructor
//   MyClass(int a) // 2nd Constructor
//   : var(a) { }
// };

// Our class has two constructors and one member variable.
// We will be overloading the + operator, to enable adding two objects of our class together.

// Operator Overloading

// Overloaded operators are functions, defined by the keyword operator followed by the symbol for the operator being defined.
// An overloaded operator is similar to other functions in that it has a return type and a parameter list.

// In our example we will be overloading the + operator. It will return an object of our class and take an object of our class as its parameter.

// class MyClass {
//  public:
//   int var;
//   MyClass() {}
//   MyClass(int a)
//   : var(a) { }

//   MyClass operator+(MyClass &obj) {
//   }
// };

// Now, we need to define what the function does.

// We need our + operator to return a new MyClass object with a member variable equal to the sum of the two objects' member variables.

#include <iostream>
using namespace std;


class MyClass {
 public:
  int var;
  MyClass() {}
  MyClass(int a)
  : var(a) { }

  MyClass operator+(MyClass &obj) {
   MyClass res;
   res.var= this->var + obj.var;
   return res; 
  }
};

// Here, we declared a new res object. We then assigned the sum of the member variables of the current object (this) and 
// the parameter object (obj) to the res object's var member variable. The res object is returned as the result.

// This gives us the ability to create objects in main and use the overloaded + operator to add them together

int main() {
  MyClass obj1(70), obj2(30);
  MyClass res = obj1+obj2;

  cout << res.var;
}

//Outputs 100

// With overloaded operators, you can use any custom logic needed. However, it's not possible to alter the operators' 
// precedence, grouping, or number of operands.



// To define an overloaded + operator for the class ''Test''.

// Test Test::operator+(Test obj) {
//  Test newObj;
//  newObj.mem = 
//   mem + obj.mem;
//  return newObj;
// }

// Above Method is used mainly while dealing with separate Class files for Header and Source