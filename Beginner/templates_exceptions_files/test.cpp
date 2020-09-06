// Which of the following declarations is illegal?
// const int* p1;
// char *str = "hello";
// double a = 1;
// char str = "hello";  $$




// Define a function "foo", which throws an exception with a value of "-100" if its parameter is greater than 999. 
// Then "foo" catches its exceptions and prints "error!" to the screen.

#include <iostream>
using namespace std;

void foo(int arg) {

try {

if (arg > 999) throw -100; 

}

catch (int x) {

cout << "error!" << endl;  }

}

int main()
{
    foo(1000);
}