// Constants

// A constant is an expression with a fixed value. It cannot be changed while the program is running.
// Use the const keyword to define a constant variable.

// const int x = 42;

// All constant variables must be initialized at the time of their creation.


// Constant Objects

// As with the built-in data types, we can make class objects constant by using the const keyword.
// const MyClass obj;

// All const variables must be initialized when they're created. In the case of classes, this initialization is done via constructors. 
// If a class is not initialized using a parameterized constructor, a public default constructor must be provided - if no public default 
// constructor is provided, a compiler error will occur.

// Once a const class object has been initialized via the constructor, you cannot modify the object's member variables. This includes
// both directly making changes to public member variables and calling member functions that set the value of member variables.

// When you've used const to declare an object, you can't change its data members during the object's lifetime.

// Only non-const objects can call non-const functions.
// A constant object can't call regular functions. Hence, for a constant object to work you need a constant function.

// To specify a function as a const member, the const keyword must follow the function prototype, outside of its parameters'
// closing parenthesis. For const member functions that are defined outside of the class definition, the const keyword must be used
// on both the function prototype and definition. For example:

// MyClass.h

// class MyClass
// {
//   public:
//     void myPrint() const;
// };

// MyClass.cpp

// #include "MyClass.h"
// #include <iostream>
// using namespace std;

// void MyClass::myPrint() const {
//   cout <<"Hello"<<endl;
// }

// Now the myPrint() function is a constant member function. As such, it can be called by our constant object:

// int main() {
//   const MyClass obj;
//   obj.myPrint();
// }

// Outputs "Hello"



// Below code shows Implementation of above code in single File
#include <iostream>
using namespace std;

class MyClass
{
    public:
        void myPrint() const;
};

void MyClass::myPrint() const {
    cout <<"Hello"<<endl;
}

int main() {
    const MyClass obj;
    obj.myPrint();
}


// Attempting to call a regular function from a constant object results in an error.
// In addition, a compiler error is generated when any const member function attempts to change a member variable or to call a
// non-const member function.
// Defining constant objects and functions ensures that corresponding data members cannot be unexpectedly modified.