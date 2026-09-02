/*
    program to demonstrate logical operators
    shows &&, || and ! operators
    u enter two numbers and it shows the results
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a     : %d\n", !a);
    printf("!b     : %d\n", !b);

    return 0;
}
