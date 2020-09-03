/* 

    Comments are explanatory statements that you can include in the C++ code to explain what the code is doing.

    The compiler ignores everything that appears in the comment, so none of that information shows in the result.

    A comment beginning with two slashes (//) is called a single-line comment. The slashes tell the compiler to ignore everything that follows, until the end of the line. 

    // Comments that require multiple lines begin with /* and end with */

/*  
    You can place them on the same line or insert   one or more lines between them.

    Comments can be written anywhere, and can be repeated any number of times throughout the code. 
*/

    // Within a comment marked with /* and */ 
    // characters have no special meaning, and vice versa. This allows you to "nest" one comment type within the other.


#include <iostream>
using namespace std;

int main()
{
   // prints "Hello world"
   cout << "Hello world!";

   /* C++ comments can
    span multiple lines
     */

   return 0;
}


/*Adding comments to your code is a good practice. It facilitates a clear understanding of the code for you and for others who read it.*/