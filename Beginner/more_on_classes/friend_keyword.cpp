// Friend Functions

// Normally, private members of a class cannot be accessed from outside of that class.
// However, declaring a non-member function as a friend of a class allows it to access the class' private members.
// This is accomplished by including a declaration of this external function within the class, and preceding it with the keyword friend.
// In the example below, someFunc(), which is not a member function of the class, is a friend of MyClass and can access its private members.
#include <iostream>
using namespace std;


class MyClass {
 public:
  MyClass() {
   regVar = 0;
  }
 private:
  int regVar;
    
  friend void someFunc(MyClass &obj1);
};

// Note that when passing an object to the function, we need to pass it by reference, using the & operator.

// The function someFunc() is defined as a regular function outside the class. It takes an object of type MyClass as its parameter,
// and is able to access the private data members of that object.

// class MyClass {
//  public:
//   MyClass() {
//    regVar = 0;
//   }
//  private:
//   int regVar;
    
//  friend void someFunc(MyClass &obj);
// };

void someFunc(MyClass &obj2) {
  obj2.regVar = 100;
  cout << obj2.regVar;
};

// Now we can create an object in main and call the someFunc() function

int main()
{   MyClass obj3 ;
    someFunc(obj3) ;
}

// The someFunc() function changes the private member of the object and prints its value.
// To make its members accessible, the class has to declare the function as a friend in its definition. You cannot "make" a function
// a friend to a class without the class "giving away" its friendship to that function.

// someFunc() had the ability to modify the private member of the object and print its value.

// Typical use cases of friend functions are operations that are conducted between two different classes accessing private members of both.
// You can declare a function friend across any number of classes.
// Similar to friend functions, you can define a friend class, which has access to the private members of another class.