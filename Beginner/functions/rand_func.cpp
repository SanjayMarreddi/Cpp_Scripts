// Random Numbers

// Being able to generate random numbers is helpful in a number of situations, including when creating games, statistical modeling programs,
// and similar end products.

// In the C++ standard library, you can access a pseudo random number generator function that's called rand(). When used, we are required
// to include the header <cstdlib>.

#include <iostream>
#include <cstdlib>

using namespace std;

void rand_num() {
  cout << rand();
}
// This will output a random number.


// A for loop can be used to generate multiple random numbers.

void rand_nums() {
  for (int x = 1; x <= 10; x++) {
    cout << rand() << endl;
  }
}

// Use the modulo (%) operator to generate random numbers within a specific range.
// The example below generates whole numbers within a range of 1 to 6.

void rand_nums_specified () {
  for (int x = 1; x <= 10; x++) {
  cout << 1 + (rand() % 6) << endl;
  }
}

// However, the rand() function will only return a pseudo random number. This means that each time the code is run, 
// it generates the same numbers.


// The srand() Function

// The srand() function is used to generate truly random numbers.
// This function allows to specify a seed value as its parameter, which is used for the rand() function's algorithm.

void rand_using_srand () {
  srand(98);

  for (int x = 1; x <= 10; x++) {
    cout << 1 + (rand() % 6) << endl;
  }
}

// Changing the seed value changes the return of rand(). However, the same argument will result in the same output


// Truly Random Numbers

// A solution to generate truly random numbers, is to use the current time as a seed value for the srand() function.
// This example makes use of the time() function to get the number of seconds on your system time, and randomly seed the rand() 
// function (we need to include the <ctime> header for it):

#include <ctime>

int main () {
  srand(time(0));

  for (int x = 1; x <= 10; x++) {
    cout << 1 + (rand() % 6) << endl;
  }
}


// time(0) will return the current second count, prompting the srand() function to set a different seed for the rand() function each
// time the program runs. Using this seed value will create a different output each time we run the program.