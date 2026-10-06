#include <stdio.h>

int main() {
    int a = 5;
    float b = 3.14;
    char c = 'A';

    printf("Size of int     = %zu bytes\n", sizeof(int));
    printf("Size of float   = %zu bytes\n", sizeof(float));
    printf("Size of double  = %zu bytes\n", sizeof(double));
    printf("Size of char    = %zu bytes\n", sizeof(char));
    printf("Size of long    = %zu bytes\n", sizeof(long));
    printf("Size of short   = %zu bytes\n", sizeof(short));

    printf("\nSize of variable a (int)   = %zu bytes\n", sizeof(a));
    printf("Size of variable b (float) = %zu bytes\n", sizeof(b));
    printf("Size of variable c (char)  = %zu bytes\n", sizeof(c));

    return 0;


}
