// Virtual Functions

// Virtual functions can also have their implementation in the base class:

#include <iostream>
using namespace std;

class Enemy {
 public:
  virtual void attack() {
   cout << "Enemy!"<<endl;
  }
};

class Ninja: public Enemy {
 public:
  void attack() {
   cout << "Ninja!"<<endl;
  }
};

class Monster: public Enemy {
 public:
  void attack() {
   cout << "Monster!"<<endl;
  }
};

// Now, when you create an Enemy pointer, and call the attack() function, the compiler will call the function,
// which corresponds to the object's type, to which the pointer points:

int main() {
 
 Ninja n;
 Monster m;
 Enemy e;

 Enemy *e1 = &n;
 Enemy *e2 = &m;
 Enemy *e3 = &e;

 e1->attack();
 // Outputs "Ninja!"

 e2->attack();
 // Outputs "Monster!"

 e3->attack();
 // Outputs "Enemy!"
}

// This is how polymorphism is generally used. You have different classes with a function of the same name, 
// and even the same parameters, but with different implementations.




// Pure Virtual Function

// In some situations you'd want to include a virtual function in a base class so that it may be redefined in a derived class to 
// suit the objects of that class, but that there is no meaningful definition you could give for the function in the base class.

// The virtual member functions without definition are known as pure virtual functions. They basically specify that the derived
//  classes define that function on their own.

// The syntax is to replace their definition by =0 (an equal sign and a zero):

// class Enemy {
//  public:
//   virtual void attack() = 0;
// }; 

// The = 0 tells the compiler that the function has no body.



// A pure virtual function basically defines, that the derived classes will have that function defined on their own.
// Every derived class inheriting from a class with a pure virtual function must override that function.
// If the pure virtual function is not overridden in the derived class, the code fails to compile and results
// in an error when you try to instantiate an object of the derived class.

// In short, A Pure Virtual Function has no body and must be implemented in derived classes.


// The pure virtual function in the Enemy class must be overridden in its derived classes.

// class Enemy {
//  public:
//   virtual void attack() = 0;
// };

// class Ninja: public Enemy {
//  public:
//   void attack() {
//    cout << "Ninja!"<<endl;
//   }
// };

// class Monster: public Enemy {
//  public:
//   void attack() {
//    cout << "Monster!"<<endl;
//   }
// };




// Abstract Classes

// You cannot create objects of the base class with a pure virtual function.
// Running the following code will return an error:

// Enemy e; // Error

// These classes are called abstract. They are classes that can only be used as base classes, 
// and thus are allowed to have pure virtual functions.

// You might think that an abstract base class is useless, but it isn't. It can be used to create pointers and take advantage 
// of all its polymorphic abilities.

// For example, you could write:

// Ninja n;
// Monster m;
// Enemy *e1 = &n;
// Enemy *e2 = &m;

// e1->attack();
// e2->attack();


// In this example, objects of different but related types are referred to using a unique type of pointer (Enemy*), 
// and the proper member function is called every time, just because they are virtual.