/*
    program to demonstrate increment and decrement operators
    shows pre and post increment and decrement
*/

#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Initial value of a = %d\n", a);

    printf("a++ (post increment) = %d\n", a++);
    printf("After post increment, a = %d\n", a);

    printf("++a (pre increment) = %d\n", ++a);

    printf("a-- (post decrement) = %d\n", a--);
    printf("After post decrement, a = %d\n", a);

    printf("--a (pre decrement) = %d\n", --a);

    return 0;
}
