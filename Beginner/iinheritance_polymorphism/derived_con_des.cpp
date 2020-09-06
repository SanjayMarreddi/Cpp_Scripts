// Inheritance

// When inheriting classes, the base class' constructor and destructor are not inherited.
// However, they are being called when an object of the derived class is created or deleted.

// To further explain this behavior, let's create a sample class that includes a constructor and a destructor:

#include <iostream>
using namespace std;

class Mother {
 public:
 Mother() 
 {
  cout <<"Mother ctor"<<endl;
 }
 ~Mother()
 {
  cout <<"Mother dtor"<<endl;
 }
};


// Mother::Mother() {
//  cout << "constructor" << endl;  // Equivalent way of doing the same thing using Header files
// }
// Mother::~Mother() {
//  cout << "destructor" << endl;
// }

// Creating an object in main results in the following output:

// int main() {
//   Mother m;
// }

/* Outputs
Mother ctor
Mother dtor
*/


// The object is created and then deleted, when the program finishes to run.


// Inheritance

// Next, let's create a Daughter class, with its own constructor and destructor, and make it a derived class of the Mother:

class Daughter: public Mother {
public:
 Daughter()
 {
  cout <<"Daughter ctor"<<endl;
 }
 ~Daughter()
 {
  cout <<"Daughter dtor"<<endl;
 }
};

// Now, what happens when we create a Daughter object?

int main() {
  Daughter m;
}

/*Outputs
Mother ctor
Daughter ctor
Daughter dtor
Mother dtor
*/

// Note that the base class' constructor is called first, and the derived class' constructor is called next.
// When the object is destroyed, the derived class's destructor is called, and then the base class' destructor is called.
// You can think of it as the following: The derived class needs its base class in order to work - that is why the base class is set up first.


// Summary

// Constructors

// The base class constructor is called first.

// Destructors

// The derived class destructor is called first, and then the base class destructor gets called.

// This sequence makes it possible to specify initialization and de-initialization scenarios for your derived classes.