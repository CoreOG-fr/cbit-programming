/*
    program to demonstrate the conditional (ternary) operator
    syntax is condition ? value_if_true : value_if_false
    u enter two numbers and it finds the larger one
*/

#include <stdio.h>

int main() {
    int a, b, larger;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;

    printf("Larger number = %d\n", larger);

    return 0;
}
