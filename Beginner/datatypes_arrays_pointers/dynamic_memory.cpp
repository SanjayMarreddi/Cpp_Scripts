#include <iostream>
using namespace std;
int main()
{

// Static & Dynamic Memory

// To be successful as a C++ programmer, it's essential to have a good understanding of how dynamic memory works.
// In a C++ program, memory is divided into two parts:
// The stack: All of your local variables take up memory from the stack.
// The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory.

// Many times, you are not aware in advance how much memory you will need to store particular information in a defined variable and the 
// size of required memory can be determined at run time.
// You can allocate memory at run time within the heap for the variable of a given type using the new operator, which returns the address
// of the space allocated. Ex:-

// new int;

// This allocates the memory size necessary for storing an integer on the heap, and returns that address.

// Dynamic Memory :- 

// The allocated address can be stored in a pointer, which can then be dereferenced to access the variable.
// Example:

int *p1 = new int;
*p1 = 5;

// We have dynamically allocated memory for an integer, and assigned it a value of 5.
// The pointer p is stored in the stack as a local variable, and holds the heap's allocated address as its value. 
// The value of 5 is stored at that address in the heap.



// For local variables on the stack, managing memory is carried out automatically.
// On the heap, it's necessary to manually handle the dynamically allocated memory, and use the delete operator to free up the memory when 
// it's no longer needed.

// delete pointer;

// This statement releases the memory pointed to by pointer.
// For example:

int *p = new int;   // request memory
*p = 5;             // store value
cout << *p << endl; // use value
delete p;           // free up the memory

// Forgetting to free up memory that has been allocated with the new keyword will result in memory leaks, because that memory will 
// stay allocated until the program shuts down.



// Dangling Pointers

// The delete operator frees up the memory allocated for the variable, but does not delete the pointer itself, as the pointer is
// stored on the stack. Pointers that are left pointing to non-existent memory locations are called dangling pointers.
// For example:

int *p2 = new int; // request memory
*p2 = 5;           // store value
delete p2; // free up the memory
            // now p2 is a dangling pointer
p2 = new int; // reuse for a new address


// The NULL pointer is a constant with a value of zero that is defined in several of the standard libraries, including iostream.
// It's a good practice to assign NULL to a pointer variable when you declare it, in case you do not have exact address to be assigned.
// A pointer assigned NULL is called a null pointer. 
// For example: int *ptr = NULL;


// Dynamic memory can also be allocated for arrays.
// For example:

int *p3= NULL;      // Pointer initialized with null
p3 = new int[20];   // Request memory
delete [] p3;       // Delete array pointed to by p3

// Note the brackets in the syntax.

cout << *p1 << " " << *p2 << " " << *p3 << "\n\n" ;

cout << p1 << " " << p2 << " " << p3 << "\n\n" ;


// Dynamic memory allocation is useful in many situations, such as when your program depends on input. As an example, when
// your program needs to read an image file, it doesn't know in advance the size of the image file and the memory necessary to store the image.

// Delete de-allocates memory on the heap

}