// What is an Object

// Object Oriented Programming is a programming style that is intended to make thinking about programming closer to thinking about
// the real world.

// In programming, objects are independent units, and each has its own identity, just as objects in the real world do.
// An apple is an object; so is a mug. Each has its unique identity. It's possible to have two mugs that look identical,
//  but they are still separate, unique objects.


// An object might contain other objects but they're still different objects.

// Objects also have characteristics that are used to describe them. For example, a car can be red or blue, a mug can be full or empty, 
// and so on. These characteristics are also called attributes. An attribute describes the current state of an object.
// Objects can have multiple attributes (the mug can be empty, red and large).
// An object's state is independent of its type; a cup might be full of water, another might be empty.


// In the real world, each object behaves in its own way. The car moves, the phone rings, and so on.
// The same applies to objects - behavior is specific to the object's type.
// So, the following three dimensions describe any object in object oriented programming: identity, attributes, behavior.


// In programming, an object is self-contained, with its own identity. It is separate from other objects.
// Each object has its own attributes, which describe its current state. Each exhibits its own behavior, which demonstrates what they can do.

// In computing, objects aren't always representative of physical items.
// For example, a programming object can represent a date, a time, a bank account. A bank account is not tangible; you can't see 
// it or touch it, but it's still a well-defined object - it has its own identity, attributes, and behavior.



// What is a Class

// Objects are created using classes, which are actually the focal point of OOP.

// The class describes what the object will be, but is separate from the object itself.

// In other words, a class can be described as an object's blueprint, description, or definition.

// You can use the same class as a blueprint for creating multiple different objects. For example, in preparation to creating a new building, 
// the architect creates a blueprint, which is used as a basis for actually building the structure. That same blueprint can be used to create 
// multiple buildings.

// Programming works in the same fashion. We first define a class, which becomes the blueprint for creating objects.

// Each class has a name, and describes attributes and behavior.

// In programming, the term type is used to refer to a class name: We're creating an object of a particular type.
// Attributes are also referred to as properties or data.


// Methods

// Method is another term for a class behavior. A method is basically a function that belongs to a class.

// Methods are similar to functions - they are blocks of code that are called, and they can also perform actions and return values.



// A Class Example

// For example, if we are creating a banking program, we can give our class the following characteristics:

// name: BankAccount
// attributes: accountNumber, balance, dateOpened
// behavior: open(), close(), deposit()

// The class specifies that each object should have the defined attributes and behavior. However, it doesn't specify what the actual data is;
//  it only provides a definition.

// Once we've written the class, we can move on to create objects that are based on that class.
// Each object is called an instance of a class. The process of creating objects is called instantiation.
// Each object has its own identity, data, and behavior.

// Declaring a Class

// Begin your class definition with the keyword class. Follow the keyword with the class name and the class body, enclosed in a 
// set of curly braces. The following code declares a class called BankAccount:

// class BankAccount {
// };

// A class definition must be followed by a semicolon.

// Define all attributes and behavior (or members) in the body of the class, within curly braces.
// You can also define an access specifier for members of the class.

// A member that has been defined using the public keyword can be accessed from outside the class, as long as it's anywhere 
// within the scope of the class object. You can also designate a class' members as private or protected. 


// Creating a Class

#include <iostream>
using namespace std;

// Let's create a class with one public method, and have it print out "Hi".

class BankAccount {
  public:
    void sayHi() {
      cout << "Hi, This is my first Class" << endl;
    }
};

// The next step is to instantiate an object of our BankAccount class, in the same way we define variables of a type,
// the difference being that our object's type will be BankAccount.

int main() 
{
  BankAccount test;
  test.sayHi();
}

// Our object named test has all the members of the class defined.
// Notice the dot separator (.) that is used to access and call the method of the object.
// We must declare a class before using it, as we do with functions.