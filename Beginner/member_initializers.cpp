// Member Initializers

// Recall that constants are variables that cannot be changed, and that all const variables must be initialized at time of creation.

// C++ provides a handy syntax for initializing members of the class called the member initializer list (also called a constructor initializer).

// Consider the following class:

// class MyClass {
//   public:
//    MyClass(int a, int b){
//     regVar = a;
//     constVar = b;
//    }
//   private:
//     int regVar;
//     const int constVar;
// };

// This class has two member variables, regVar and constVar. It also has a constructor that takes two parameters, which are used to
// initialize the member variables.

// Running the above code returns an error, because one of its member variables is a constant, which cannot be assigned a value after
// declaration.


// In cases like this one, a member initialization list can be used to assign values to the member variables.

// #include <iostream>
// using namespace std;

// class MyClass {
//  public:
//   MyClass(int a, int b)
//   : regVar(a), constVar(b)
//   { 
//   }
//  private:
//   int regVar;
//   const int constVar;
// };


// Note that in the syntax, the initialization list follows the constructor parameters. The list begins with a colon (:), and 
// then lists each variable to be initialized, along with the value for that variable, with a comma to separate them.

// Use the syntax variable(value) to assign values.

// The initialization list eliminates the need to place explicit assignments in the constructor body. 
// Also, the initialization list does not end with a semicolon.

// Let's write the previous example using separate header and source files.

// MyClass.h

// class MyClass {
//   public:
//    MyClass(int a, int b);
//   private:
//    int regVar;
//    const int constVar;
// };

// MyClass.cpp

// #include "MyClass.h"
// MyClass::MyClass(int a, int b)
// : regVar(a), constVar(b)
// {
//   cout << regVar << endl;
//   cout << constVar << endl;
// }

// We have added cout statements in the constructor to print the values of the member variables.
// Our next step is to create an object of our class in main, and use the constructor to assign values.


// int main() {
//   MyClass obj(42, 33);
// }

/*Outputs 
42
33
*/

// The constructor is used to create the object, assigning two parameters to the member variables via the member initialization list.

// Implementing above code in a Single File

#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass(int a, int b);
    private:
        int regVar;
        const int constVar;
};

MyClass::MyClass(int a, int b)
: regVar(a), constVar(b)
{
    cout << regVar << endl;
    cout << constVar << endl;
}

int main() {
    MyClass obj(1, 2);
}

// Note that Implementing in a Single File just means REPLACING the statement [ #include "MyClass.h" ] with the code present in MyClass.h file

// The member initialization list may be used for regular variables, and must be used for constant variables.
// Even in cases in which member variables are not constant, it makes good sense to use the member initializer syntax.

// In short , A constant Member Variable must be initialized in the Constructor Initializer List
