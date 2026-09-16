/*
    program to print numbers from 1 to n
    u enter the value of n and it prints all the numbers in one line
    uses a for loop
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than 0\n");
        return 0;
    }

    printf("Numbers from 1 to %d are: ", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
