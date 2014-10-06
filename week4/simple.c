/*

Anatomy of C program
- data and data types
- compile time and runtime arrays
- loops
- branching
- functions

*/

#include <stdio.h>
void test(int value);

/*

* always start in main

*/

int main (int argc, char** argv) {

      test(5); 

}

//this function returns nothing ie void and takes no parameters

// takes one parameter
void test(int value) {

printf("Greetings from test()\n");

}
