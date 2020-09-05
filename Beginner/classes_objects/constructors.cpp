// Constructors

// Class constructors are special member functions of a class. They are executed whenever new objects are created within that class.

// The constructor's name is identical to that of the class. It has no return type, not even void.

// For example:

/*

class myClass {
  public:
    myClass() {         // This is the CONSTRUCTOR for this Class
      cout <<"Hey";
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
  private:
    string name;
};

int main() {
  myClass myObj;

  return 0;
}



//Outputs "Hey"

// Now, upon the creation of an object of type myClass, the constructor is automatically called.



// Constructors can be very useful for setting initial values for certain member variables.
// A default constructor has no parameters. However, when needed, parameters can be added to a constructor.
// This makes it possible to assign an initial value to an object when it's created, as shown in the following example:

/*

class myClass {
  public:
    myClass(string nm) {
      setName(nm);
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
  private:
    string name;
};

*/

// We defined a constructor, that takes one parameter and assigns it to the name attribute using the setName() method.



// When creating an object, you now need to pass the constructor's parameter, as you would when calling a function:

#include <iostream>
using namespace std;

class myClass {
  public:
    myClass(string nm) {
      setName(nm);
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
  private:
    string name;
};

int main() {
  myClass ob1("Sanjay");
  myClass ob2("Marreddi");
  cout << ob2.getName() << "\n";
  cout << ob1.getName();
}

// We've defined two objects, and used the constructor to pass the initial value for the name attribute for each object.
// It's possible to have multiple constructors that take different numbers of parameters.   