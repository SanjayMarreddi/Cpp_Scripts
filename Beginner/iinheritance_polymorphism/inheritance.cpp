// Inheritance

// Inheritance is one of the most important concepts of object-oriented programming.
// Inheritance allows us to define a class based on another class. This facilitates greater ease in creating and maintaining an application.

// The class whose properties are inherited by another class is called the Base class. The class which inherits the properties is called 
// the Derived class. For example, the Daughter class (derived) can be inherited from the Mother class (base).
// The derived class inherits all feature from the base class, and can have its own additional features.

//The idea of inheritance implements the "is a" relationship. For example, mammal IS-A animal, dog IS-A mammal, hence dog IS-A animal as well.

// To demonstrate inheritance, let's create a Mother class and a Daughter class:

#include <iostream>
using namespace std;

class Mother
{
 public:
  Mother() {};          //Constructor
  void sayHi() {
    cout << "Hi";
  } 
};

// class Daughter 
// {
//  public: 
//   Daughter() {};    //Constructor
// };

// The Mother class has a public method called sayHi().

// The next step is to inherit (derive) the Daughter from the Mother


// This syntax derives the Daughter class from the Mother class.

class Daughter : public Mother
{
 public: 
  Daughter() {};
};

// The Base class is specified using a colon and an access specifier: public means, that all public members of the base class are public 
// in the derived class.
// In other words, all public members of the Mother class become public members of the Daughter class.


// As all public members of the Mother class become public members for the Daughter class, we can create an object of
// type Daughter and call the sayHi() function of the Mother class for that object:

int main ()
{
    Daughter obj;
    obj.sayHi() ;
}

// A derived class inherits all base class methods with the following exceptions:
// - Constructors, destructors
// - Overloaded operators
// - The friend functions

// A class can be derived from multiple classes by specifying the base classes in a comma-separated list.
// For example: class Daughter: public Mother, public Father