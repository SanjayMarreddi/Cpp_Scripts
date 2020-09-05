// Encapsulation

// Part of the meaning of the word encapsulation is the idea of "surrounding" an entity, not just to keep what's inside together, 
// but also to protect it.

// In object orientation, encapsulation means more than simply combining attributes and behavior together within a class; it also 
// means restricting access to the inner workings of that class.

// The key principle here is that an object only reveals what the other application components require to effectively run the application. 
// All else is kept out of view. This is called data hiding.


// For example, if we take our BankAccount class, we do not want some other part of our program to reach in and change the balance of any
// object, without going through the deposit() or withdraw() behaviors.

// We should hide that attribute, control access to it, so it is accessible only by the object itself.
// This way, the balance cannot be directly changed from outside of the object and is accessible only using its methods.

// This is also known as "black boxing", which refers to closing the inner working zones of the object, except of the pieces that we want to 
// make public.

// This allows us to change attributes and implementation of methods without altering the overall program. For example, we can come back later
// and change the data type of the balance attribute.

// In summary the benefits of encapsulation are:
// - Control the way data is accessed or modified.
// - Code is more flexible and easy to change with new requirements.
// - Change one part of code without affecting other part of code.



// Access Specifiers

// Access specifiers are used to set access levels to particular members of the class.
// The three levels of access specifiers are public, protected, and private.

// A public member is accessible from outside the class, and anywhere within the scope of the class object

/*

class myClass {
  public:
    string name;
};

int main() {
  myClass myObj;
  myObj.name = "SoloLearn";
  cout << myObj.name;
  return 0;
}

*/

//Outputs "SoloLearn"

// The name attribute is public; it can be accessed and modified from outside the code.
// Access modifiers only need to be declared once; multiple members can follow a single access modifier.
// Notice the colon (:) that follows the public keyword.




// Private

// A private member cannot be accessed, or even viewed, from outside the class; it can be accessed only from within the class.
// A public member function may be used to access the private members. For example:


/*
class myClass {
  public:
    void setName(string x) {
      name = x;
    }
  private:
    string name;
}

int main() {
  myClass myObj;
  myObj.setName("John");

  return 0;
};

*/

// The name attribute is private and not accessible from the outside.
// The public setName() method is used to set the name attribute.

// If no access specifier is defined, all members of a class are set to "private" by default.

// We can add another public method in order to get the value of the attribute.

/*
class myClass {
  public:
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

// The getName() method returns the value of the private name attribute.




// Access Specifiers

// Putting it all together:

#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
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
  myObj.setName("Sanjay");
  cout << myObj.getName();

  return 0;
}

//Outputs "John"

// We used encapsulation to hide the name attribute from the outside code. Then we provided access to it using public methods.
// Our class data can be read and modified only through those methods.
// This allows for changes to the implementation of the methods and attributes, without affecting the outside code.