// Abstraction

// Data abstraction is the concept of providing only essential information to the outside world. It's a process of representing essential
// features without including implementation details.

// A good real-world example is a book: When you hear the term book, you don't know the exact specifics, i.e.: the page count, 
// the color, the size, but you understand the idea of a book - the abstraction of the book.

// The concept of abstraction is that "we focus on essential qualities", rather than the specific characteristics of one particular example.


// Abstraction means, that we can have an idea or a concept that is completely separate from any specific instance.
// It is one of the fundamental building blocks of object oriented programming.

// For example, when you use cout, you're actually using the cout object of the class ostream. This streams data to result in standard output.

#include <iostream>
using namespace std;
int main(){
cout << "Hello!" << endl;
}

// In this example, there is no need to understand how cout will display the text on the user's screen.
// The only thing you need to know to be able to use it is the public interface.


// Abstraction allows us to write a single bank account class, and then create different objects based on the class, 
// for individual bank accounts, rather than creating a separate class for each bank account.

// Abstraction acts as a foundation for the other object orientation fundamentals, such as inheritance and polymorphism