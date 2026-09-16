/*
    program to print even numbers from 1 to n
    u enter n and it prints only the even numbers
    the loop starts from 2 and jumps by 2 each time
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no even numbers from 1 to %d\n", n);
        return 0;
    }

    printf("Even numbers from 1 to %d are: ", n);

    for (i = 2; i <= n; i = i + 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
