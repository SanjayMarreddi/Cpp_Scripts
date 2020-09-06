// This

// Every object in C++ has access to its own address through an important pointer called the this pointer.
// Inside a member function this may be used to refer to the invoking object.

// Let's create a sample class:

// class MyClass {
//  public:
//   MyClass(int a) : var(a)
//   { /*Body of Constructor*/}
//  private:
//   int var;
// };

// Friend functions do not have a this pointer, because friends are not members of a class.



#include <iostream>
using namespace std;

class MyClass {
 public:
  MyClass(int a) : var(a) // Using Member Initialization list 
  {  /*Body of Constructor*/ }

  void printInfo() {    // The printInfo() method offers three alternatives for printing the member variable of the class.
   cout << var<<endl;
   cout << this->var<<endl;
   cout << (*this).var<<endl; 
  }
 private:
  int var;
};

// All three alternatives will produce the same result.
// "this" is a pointer to the object, so the arrow selection operator is used to select the member variable.


// To see the result, we can create an object of our class and call the member function.

int main() {
  MyClass obj(100);
  obj.printInfo();
}

// Note that only member functions have a "this" pointer.

// You may be wondering why it's necessary to use the "this" keyword, when you have the option of directly specifying the variable.
// The "this" keyword has an important role in operator overloading !!!