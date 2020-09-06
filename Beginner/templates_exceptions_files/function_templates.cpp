// Function Templates

// Functions and classes help to make programs easier to write, safer, and more maintainable.
// However, while functions and classes do have all of those advantages, in certain cases they can also be somewhat
// limited by C++'s requirement that you specify types for all of your parameters.

// For example, you might want to write a function that calculates the sum of two numbers, similar to this:
// int sum(int a, int b) {
//   return a+b;
// }

// You can use templates to define functions as well as classes. Let's see how they work.

// We can now call the function for two integers in our main.

#include <iostream>
using namespace std;

// int sum(int a, int b) {
//   return a+b;
// }

// int main () {
//   int x=7, y=15;
//   cout << sum(x, y) << endl;
// }                               // Outputs 22


// The function works as expected, but is limited solely to integers.

// It becomes necessary to write a new function for each new type, such as doubles.

// double sum(double a, double b) {
//   return a+b;
// }

// Wouldn't it be much more efficient to be able to write one version of sum() to work with parameters of any type?

// Function templates give us the ability to do that!
// With function templates, the basic idea is to avoid the necessity of specifying an exact type for each variable.
// Instead, C++ provides us with the capability of defining functions using placeholder types, called template type parameters.

// To define a function template, use the keyword template, followed by the template type definition:

// template <class T>   (or)  template <class MyType>

// We named our template type T, which is a generic data type.


// Now we can use our generic data type T1 in the function:

template <class T1>      //More Generallt written as  template <typename T1>
T1 sum(T1 a, T1 b) {
  return a+b;
}

int main_1 () {
    int x=7, y=15;
    cout << sum(x, y) << endl;

    double x1=7.5, y1=14;       // The same function can be used with other data types, for example doubles
    cout << sum(x1, y1) << endl;     
    
    return 0;   
}   


// The function returns a value of the generic type T, taking two parameters, also of type T


// The compiler automatically calls the function for the corresponding type.
// When creating a template type parameter, the keyword typename may be used as an alternative to the keyword class: template <typename T>.
// In this context, the keywords are identical, but throughout this course, we'll use the keyword class.


// Template functions can save a lot of time, because they are written only once, and work with different types.
// Template functions reduce code maintenance, because duplicate code is reduced significantly.
// Enhanced safety is another advantage in using template functions, since it's not necessary to manually copy functions and change types.





// Function Templates with Multiple Parameters


// Function templates also make it possible to work with multiple generic data types. Define the data types using a comma-separated list.
// Let's create a function that compares arguments of varying data types (an int and a double), and prints the smaller one.

// template <class T, class U>

// As you can see, this template declares two different generic data types, T and U.



// Now we can continue with our function declaration:

template <class T, class U>
T smaller(T a, U b) {       // Return type is T.
  return (a < b ? a : b);
}

// The ternary operator checks the a<b condition and returns the corresponding result. The expression (a < b ? a : b)
//  is equivalent to the expression if a is smaller than b, return a, else, return b.

int main()

{   main_1();
  int x=72;
  double y=15.34;
  cout << smaller(x, y) << endl;  
// The output converts to an integer, because we specified the function template's return type to be of the same type as the first 
// parameter (T), which is an integer.

}


// T is short for Type, and is a widely used name for type parameters.
// It's not necessary to use T, however; you can declare your type parameters using any identifiers that work for you.
// The only terms you need to avoid are C++ keywords.
// Remember that when you declare a template parameter, you absolutely must use it in your function definition. 
// Otherwise, the compiler will complain!