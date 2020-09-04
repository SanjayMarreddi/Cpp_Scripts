
#include <iostream>
using namespace std;
int main()
{

// sizeof :-

// While the size allocated for various data types depends on the architecture of the computer you use to run your programs, 
// C++ does guarantee a minimum size for the basic data types:


// Type	               ypical Bit Width       Typical Range
// char	                        1byte	-127 to 127 or 0 to 255
// unsigned char	            1byte	 0 to 255
// signed char	                1byte	-127 to 127
// int	                        4bytes	-2147483648 to 2147483647
// unsigned int	                4bytes	0 to 4294967295
// signed int	                4bytes	-2147483648 to 2147483647
// short int	                2bytes	-32768 to 32767
// unsigned short int	        2bytes	0 to 65,535
// signed short int	            2bytes	-32768 to 32767
// long int	                    8bytes	-2,147,483,648 to 2,147,483,647
// signed long int	            8bytes	same as long int
// unsigned long int	        8bytes	0 to 4,294,967,295
// long long int	            8bytes	-(2^63) to (2^63)-1
// unsigned long long int	    8bytes	0 to 18,446,744,073,709,551,615
// float	                    4bytes	
// double	                    8bytes	
// long double	                12bytes	
// wchar_t	                    2 or 4 bytes	1 wide character


// The sizeof operator can be used to get a variable or data type's size, in bytes.
// Syntax:

// sizeof (data type)

// The sizeof operator determines and returns the size of either a type or a variable in bytes.
// For example:

cout << "char: " << sizeof(char) << endl;
cout << "int: " << sizeof(int) << endl; 
cout << "float: " << sizeof(float) << endl;
cout << "double: " << sizeof(double) << endl;
int var = 50;
cout << "var: " << sizeof(var) << endl;

// Output values may vary, according to the computer and compiler used.

// Size of an Array

// The C++ sizeof operator is also used to determine the size of an array.
// For example:

double myArr[10];
cout << sizeof(myArr) << endl;  //Outputs 80

// On our machine, double takes 8 bytes. The array stores 10 doubles, so the entire array occupies 80 (8*10) bytes in the memory.

// In addition, divide the total number of bytes in the array by the number of bytes in a single element to learn how many elements you have
// in the array.

// For example:

int numbers[100];
cout << sizeof(numbers) / sizeof(numbers[0]);

// Outputs 100


}
