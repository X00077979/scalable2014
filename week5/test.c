/*

Program to complete the following: 

Fills array with values

Computes average array value data

Computes varience of the array

*/

#include <stdio.h>
void test(int value);

float calcAvg (int average[], int size);

int main (int argc, char** argv) {

const int size = 10;
int data[size];
float average;
int sum = 0;


for (int i = 0; i< size; i++) {
        data[i] = i;
}
        /*
        * call calcAvg with the right parameters
        */

        {

         for (int i = 0; i< size; i++) {
         sum =  sum + data[i];
         average =  sum/10;
                          }
        }
        printf("Average is: %f \n", average);

}

float calcAvg (int average[], int size) {
        float avg = 0.0;

        /* calculate the average here...*/
        for(int i = 0; i < size; i++){
        }

        return avg;
}




