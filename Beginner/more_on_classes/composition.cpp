// Composition

// In the real world, complex objects are typically built using smaller, simpler objects. For example, a car is assembled using a metal frame,
//  an engine, tires, and a large number of other parts. This process is called composition.

// In C++, object composition involves using classes as member variables in other classes.
// This sample program demonstrates composition in action. It contains Person and Birthday classes, and each Person will have a Birthday
// object as its member.

#include <iostream>
using namespace std;

// Birthday:

class Birthday {
 public:
  Birthday(int m, int d, int y)
  : month(m), day(d), year(y)
  { //Body of Constructor
  }
   void printDate()         // Add a printDate() function to our Birthday class.
  {
   cout<<month<<"/"<<day
   <<"/"<<year<<endl;
  }
 private:
   int month;
   int day;
   int year;
};



// Our Birthday class has three member variables. It also has a constructor that initializes the members using a member initialization list.
// The class was declared in a single file for the sake of simplicity. Alternatively, you could use header and source files


// Next, we can create the Person class, which includes the Birthday class.

// #include <string>
// #include "Birthday.h"

// class Person {
//  public:
//   Person(string n, Birthday b)       //  Important Line to Understand
//   : name(n),
//    bd(b)
//   {
//   }
//  private:
//   string name;
//   Birthday bd;
// };

// The Person class has a name and a Birthday member, and a constructor to initialize them.
// Ensure that the corresponding header files are included.



// Now, our Person class has a member of type Birthday:

class Person {
 public:
  Person(string n, Birthday b)
  : name(n),
    bd(b)
  { // Body of the Constructor
  }
  void printInfo()                       // Let's add a printInfo() function to our Person class, that prints the data of the object
  {
   cout << name << endl;
   bd.printDate();
  }
 private:
  string name;
  Birthday bd;
};

// Composition is used for objects that share a has-a relationship, as in "A Person has a Birthday".
// Notice that we can call the bd member's printDate() function, since it's of type Birthday, which has that function defined.


// Now that we've defined our Birthday and Person classes, we can go to our main, create a Birthday object, and then pass it to a Person object.

int main() {
  Birthday bd(2, 21, 1985);
  Person p("David", bd);
  p.printInfo();
}


// We've created a Birthday object for the date of 2/21/1985. Next, we created a Person object and passed the Birthday object to its
// constructor. Finally, we used the Person object's printInfo() function to print its data.

// In general, composition serves to keep each individual class relatively simple, straightforward, and focused on performing one task.
//  It also enables each sub-object to be self-contained, allowing for reusability (we can use the Birthday class within various other classes).
