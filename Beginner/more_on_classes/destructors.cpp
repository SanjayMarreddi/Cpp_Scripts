// Destructors

// Remember constructors? They're special member functions that are automatically called when an object is created.

// Destructors are special functions, as well. They're called when an object is destroyed or deleted.
// Objects are destroyed when they go out of scope, or whenever the delete expression is applied to a pointer directed at an object of a class.

// The name of a destructor will be exactly the same as the class, only prefixed with a tilde (~). A destructor can't return
// a value or take any parameters.

// class MyClass {
//   public: 
//     ~MyClass() {
//      // some code
//     }
// };

// Destructors can be very useful for releasing resources before coming out of the program. This can include closing files, 
// releasing memory, and so on.


// For example, let's declare a destructor for our MyClass class, in its header file MyClass.h:

// class MyClass
// {
//   public:
//    MyClass();                    ---> Constructor
//    ~MyClass();                   ---> Destructor
// };


// After declaring the destructor in the header file, we can write the implementation in the source file MyClass.cpp:

// #include "MyClass.h"
// #include <iostream>
// using namespace std;

// MyClass::MyClass()
// {
//   cout<<"Constructor"<<endl;
// }

// MyClass::~MyClass()
// {
//   cout<<"Destructor"<<endl;
// }

// Note that we included the <iostream> header, so that we can use cout.



// Since destructors can't take parameters, they also can't be overloaded.
// Each class will have just one destructor.

// Defining a destructor is not mandatory; if you don't need one, you don't have to define one.


// Let's return to our main.

// #include <iostream>
// #include "MyClass.h"
// using namespace std;

// int main() {
//   MyClass obj;

//   return 0;
// }

// We included the class' header file and then created an object of that type.
// This returns the following output:
// Constructor
// Destructor

// When the program runs, it first creates the object and calls the constructor. The object is deleted and the destructor 
// is called when the program's execution is completed.
// Remember that we printed "Constructor" from the constructor and "Destructor" from the destructor.
