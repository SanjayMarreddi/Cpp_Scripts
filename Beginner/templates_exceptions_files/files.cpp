// Working with Files 

// Another useful C++ feature is the ability to read and write to files. That requires the standard C++ library called fstream.
// Three new data types are defined in fstream:

// ofstream: Output file stream that creates and writes information to files.
// ifstream: Input file stream that reads information from files.
// fstream: General file stream, with both ofstream and ifstream capabilities that allow it to create, read, and write information to files.

// To perform file processing in C++, header files <iostream> and <fstream> must be included in the C++ source file.

// #include <iostream>
// #include <fstream>

// These classes are derived directly or indirectly from the classes istream and ostream. We have already used objects whose 
// types were these classes: cin is an object of class istream and cout is an object of class ostream.



// Opening, Writing and Closing a File

// A file must be opened before you can read from it or write to it.
// Either the ofstream or fstream object may be used to open a file for writing.

// Let's open a file called "test.txt" and write some content to it:

#include <iostream>
#include <fstream>
using namespace std;

// int main() {
//   ofstream MyFile;
//   MyFile.open("test.txt");

//   MyFile << "Some text. \n";

//   // When you've finished working with a file, close it using the member function close().
//   MyFile.close();
// }

// The above code creates an ofstream object called MyFile, and uses the open() function to open the "test.txt" file 
// on the file system. As you can see, the same stream output operator is used to write into the file.
// If the specified file does not exist, the open function will create it automatically.

// Running above code will cause a "test.txt" file to be created in the directory of your project with "Some text!" written in it.

// You also have the option of specifying a path for your file in the open function, since it can be in a location 
// other than that of your project.




// You can also provide the path to your file using the ofstream objects constructor, instead of calling the open function.

// #include <fstream>
// using namespace std;

// int main() {
//   ofstream MyFile("test.txt");

//   MyFile << "This is awesome! \n";
//   MyFile.close();
// }

// As with the open function, you can provide a full path to your file located in a different directory.



// Under certain circumstances, such as when you don't have file permissions, the open function can fail.
// The is_open() member function checks whether the file is open and ready to be accessed.

#include <iostream>
#include <fstream>
using namespace std;

int main1() {
  ofstream MyFile("test.txt");

  if (MyFile.is_open()) {
   MyFile << "This is awesome! \n";
  }
  else {
   cout << "Something went wrong";
  }
  MyFile.close();
  return 0;
}

// The is_open() member function checks whether the file is open and ready to be accessed.





// File Opening Modes

// An optional second parameter of the open function defines the mode in which the file is opened. 

// Syntax:

// ofstream outfile;
// outfile.open("file.dat", ios::out );

// This list shows the supported modes:-

// No	Open mode	Description
// 1	in	        Open for reading
// 2	out	        Open for writing
// 3	ate	        Seek to end of file upon original open
// 4	app	        Append mode
// 5	trunc	    Truncate file if already exists
// 6	nocreate	Open fails if file does not exists
// 7	noreplace	Open fails if file already exists
// 8	binary	    Opens file as binary


// All these flags can be combined using the bitwise operator OR (|).
// For example, to open a file in write mode and truncate it, in case it already exists, use the following syntax:

// ofstream outfile;
// outfile.open("file.dat", ios::out | ios::trunc );



// Reading from a File
// You can read information from a file using an ifstream or fstream object.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  string line;
  ifstream MyFile("test.txt");
  while ( getline (MyFile, line) ) {
   cout << line << '\n';
  }
  MyFile.close();
}


// The getline function reads characters from an input stream and places them into a string.
// The example above reads a text file and prints the contents to the screen.
// Our while loop uses the getline function to read the file line by line.