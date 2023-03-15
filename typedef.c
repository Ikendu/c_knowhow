#include <stdio.h>

/*
Given the following declarations:
typedef char WORD;
typedef int SHORT;
typedef long LONG;
typedef float FLOAT;
typedef double DFLOAT;
write a program to measure the sizes of the synonyms to the data types.
*/

typedef char WORD;
typedef int NUMBER;
typedef long LONG;
typedef float FLOAT;
typedef double DOUBLE;

int main()
{
        printf("the size of WORD is: %d-byte \n", sizeof(WORD));
        printf("the size of NUMBER is: %d-byte \n", sizeof(NUMBER));
        printf("the size of LONG is: %d-byte \n", sizeof(LONG));
        printf("the size of FLOAT is: %d-byte \n", sizeof(FLOAT));
        printf("the size of DOUBLE is: %d-byte \n", sizeof(DOUBLE));
}
