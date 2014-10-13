/*

Fills array with values

Computes average array value data

Computes varience of the array

*/

#include <stdio.h>
void test(int value);

/*

* always start in main

*/

int main (int argc, char** argv) {

      int data [10];

     int    array[7] = {1, 2, 3, 4, 5, 6, 7};

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
