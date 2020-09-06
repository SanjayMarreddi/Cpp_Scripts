// Class Templates

// Just as we can define function templates, we can also define class templates, allowing classes to have members
// that use template parameters as types.

// The same syntax is used to define the class template:

// template <class T>
// class MyClass {

// };

// Just as with function templates, you can define more than one generic data type by using a comma-separated list.


// As an example, let's create a class Pair1, that will be holding a pair of values of a generic type.

template <class T1>
class Pair1 {
 private:
  T1 first, second;
 public:
  Pair1 (T1 a, T1 b):
   first(a), second(b) {
  }
};

// The code above declares a class template Pair1, with two private variables of a generic type, 
// and one constructor to initialize the variables.


// A specific syntax is required in case you define your member functions outside of your class - for example in a separate source file.
// You need to specify the generic type in angle brackets after the class name.

// For example, to have a member function bigger() defined outside of the class, the following syntax is used:

// template <class T>
// class Pair {
//  private:
//   T first, second;
//  public:
//   Pair (T a, T b):
//    first(a), second(b){ // Constructor Statements 
//   }
//   T bigger();
// };


// Calling the member function bigger() outside the class

// template <class T>
// T Pair<T>::bigger() {
//   // some code
// }

// A specific syntax is required in case you define your member functions outside of your class.


// The bigger function returns the greater value of the two member variables.

template <class T>
class Pair {
 private:
  T first, second;
 public:
  Pair (T a, T b):
   first(a), second(b){
  }
  T bigger();
};

template <class T>
T Pair<T>::bigger() {
  return (first>second ? first : second);
}

// The ternary operator compares the two variables, returning the greater one.


// To create objects of the template class for different types, specify the data type in angle brackets, 
// as we did when defining the function outside of the class.


#include <iostream>
using namespace std;

int main()
{

Pair <int> obj(11, 22);         //Here, we create a Pair object for integers.
cout << obj.bigger() << "\n";
// Outputs 22

Pair <double> obj1(23.43, 5.68); // We can use the same class to create an object that stores any other type
cout << obj1.bigger();
// Outputs 23.43

}