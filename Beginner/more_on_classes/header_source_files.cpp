// Creating a New Class

// It is generally a good practice to define your new classes in separate files. This makes maintaining and reading the code easier.

// Say we are interested in making a class named "MyClass" in a separate file :-

// The new files act as templates for our new class.
// - MyClass.h is the header file.
// - MyClass.cpp is the source file.

// Source & Header

// The header file (.h) holds the function declarations (prototypes) and variable declarations.
// It currently includes a template for our new MyClass class, with one default constructor.

// MyClass.h :-

/*
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
  public:
    MyClass();
  protected:
  private:
};

#endif // MYCLASS_H

*/

// The implementation of the class and its methods go into the source file (.cpp).
// Currently it includes just an empty constructor.

// MyClass.cpp :-

/*

#include "MyClass.h"

MyClass::MyClass()
{
   //ctor
}

*/

// Scope Resolution Operator

// The double colon in the source file (.cpp) is called the scope resolution operator, and it's used for the constructor definition:

/*

#include "MyClass.h"

MyClass::MyClass()
{
   //ctor
}

*/

// The scope resolution operator is used to define a particular class member functions, which have already been declared. Remember that we 
// defined the constructor prototype in the header file.
// So, basically, MyClass::MyClass() refers to the MyClass() member function - or, in this case, constructor - of the MyClass class.

// To use our classes in our main, we need to include the header file.

// For example, to use our newly created MyClass in main:

// #include <iostream>
// #include "MyClass.h"

// using namespace std;  

// int main() {
//   MyClass obj;
//   cout << "Hello" ;
// }


// The header declares "what" a class (or whatever is being implemented) will do, while the cpp source file defines "how" it
//  will perform those features.