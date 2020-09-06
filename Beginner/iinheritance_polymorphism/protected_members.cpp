// Access Specifiers

// Up to this point, we have worked exclusively with public and private access specifiers.
// Public members may be accessed from anywhere outside of the class, while access to private members is 
// limited to their class and friend functions.
// As we've seen previously, it's a good practice to use public methods to access private class variables.

// Protected

// There is one more access specifier - protected.
// A protected member variable or function is very similar to a private member, with one difference - it can be accessed in the derived classes.

#include <iostream>
using namespace std;

class Mother {
 public:
  void sayHi() {
   cout << var;
  }

 private:
  int var=0;

 protected:
  int someVar;
};

int main()
{
    Mother obj;
    obj.sayHi();
}

// Now someVar can be accessed by any class that is derived from the Mother class.

// Type of Inheritance

// Access specifiers are also used to specify the type of inheritance.
// Remember, we used public to inherit the Daughter class as       class Daughter: public Mother

// private and protected access specifiers can also be used here.

// Public Inheritance: public members of the base class become public members of the derived class and protected members of the 
// base class become protected members of the derived class. A base class's private members are never accessible directly from a 
// derived class, but can be accessed through calls to the public and protected members of the base class.

// Protected Inheritance: public and protected members of the base class become protected members of the derived class.

// Private Inheritance: public and protected members of the base class become private members of the derived class.

// Public inheritance is the most commonly used inheritance type.

// If no access specifier is used when inheriting classes, the type becomes private by default.