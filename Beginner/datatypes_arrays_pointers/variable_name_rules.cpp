/*
Variable Naming Rules :-

Use the following rules when naming variables:
- All variable names must begin with a letter of the alphabet or an underscore( _ ).
- After the initial letter, variable names can contain additional letters, as well as numbers. 
- Blank spaces or special characters are not allowed in variable names.

There are two known naming conventions:

Pascal case: The first letter in the identifier and the first letter of each subsequent concatenated word are capitalized. For example: BackColor
Camel case: The first letter of an identifier is lowercase and the first letter of each subsequent concatenated word is capitalized. For example: backColor


Case-Sensitivity :- 

C++ is case-sensitive, which means that an identifier written in uppercase is not equivalent to another one with the same name in lowercase.
For example, myvariable is not the same as MYVARIABLE and not the same as MyVariable. These are three different variables.

Choose variable names that suggest the usage, for example: firstName, lastName.


Variable Naming Rules :- 

C++ keyword (reserved word) cannot be used as variable names.
For example, int, float, double, cout cannot be used as a variable name.
There is no real limit on the length of the variable name (depends on the environment), 
but try to keep your variable names practical and meaningful.

*/


#include <iostream>
using namespace std;
int main()
{
 
 string hello ;
 hello = "Hello World" ;
 cout << hello ;
 // cout << Hello ;    This gives Error


}