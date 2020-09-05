// #ifndef & #define

// We created separate header and source files for our class, which resulted in this header file.

// #ifndef MYCLASS_H
// #define MYCLASS_H

// class MyClass
// {
//   public:
//   MyClass();
//   protected:
//   private:
// };

// #endif // MYCLASS_H 

// ifndef stands for "if not defined". The first pair of statements tells the program to define the MyClass header file if
// it has not been defined already. endif ends the condition.
// This prevents a header file from being included more than once within one file.






// Member Functions

// Let's create a sample function called myPrint() in our class.
// MyClass.h :-

// class MyClass
// {
//   public:
//    MyClass();
//    void myPrint();
// };

// MyClass.cpp :-

// #include "MyClass.h"
// #include <iostream>
// using namespace std;

// MyClass::MyClass() {
// }

// void MyClass::myPrint() {
//   cout <<"Hello"<<endl;
// }

// Since myPrint() is a regular member function, it's necessary to specify its return type in both the declaration and the definition.



// Dot Operator

// Next, we'll create an object of the type MyClass, and call its myPrint() function using the dot (.) operator:

// #include "MyClass.h"

// int main() {
//   MyClass obj;
//   obj.myPrint();
// }

// Outputs "Hello





// Pointers

// We can also use a pointer to access the object's members.
// The following pointer points to the obj object:

// MyClass obj;
// MyClass *ptr = &obj;

// The type of the pointer is MyClass, as it points to an object of that type.



// Selection Operator

// The arrow member selection operator (->) is used to access an object's members with a pointer.

// MyClass obj;
// MyClass *ptr = &obj;
// ptr->myPrint();              // It is equivalent to obj.myPrint()


// When working with an object, use the dot member selection operator (.).
// When working with a pointer to the object, use the arrow member selection operator (->).




// Below code shows Implementation of above code in single File
#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass();
        void myPrint();
};

MyClass::MyClass() {
}
void MyClass::myPrint() {
    cout <<"Hello"<<endl;
}

int main() {
    MyClass obj;
    MyClass *ptr = &obj;
    ptr->myPrint();
}