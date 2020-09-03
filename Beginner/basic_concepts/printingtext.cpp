#include <iostream>
using namespace std;

    
/*  - You can add multiple insertion operators after cout.

    - Dont forget adding semicolon at the end of statement

    - The cout object does not insert a line break at the end of the output.One way to print two lines is to use the endl manipulator, which will put in a line break.

    - The new line character \n can be used as an alternative to endl. The backslash (\) is called an escape character, and indicates a "special" character.

    - Two newline characters placed together result in a blank line.

    - Using a single cout statement with as many instances of \n as your program requires will print out multiple lines of text

    
*/

int main()
{
  cout << "This " << "is " << "awesome! \n";
  cout << "Hello world!" << endl;
  cout << "I love programming!\n";
  cout << "Test for blank lines\n\n";
  cout << " Hello \n world! \n I \n love \n programming!";
  return 0;
}