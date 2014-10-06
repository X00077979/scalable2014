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

      int data [10];

      test(5); 
        printf ("End of main\n");
}

//this function returns nothing ie void and takes no parameters

// takes one parameter
void test(int value) {

       if(value > 10) { 

          printf ("Big Number\n");
     }

      

      for (int i=0; i < 10; i++ ) {

        printf("Hello from the loop\n");    

     }
     printf ("End of function\n");

}
