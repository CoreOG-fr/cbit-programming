#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than 0\n");
        return 0;


    }

    printf("Numbers from %d to 1 in reverse order: ", n);

    for (i = n; i >= 1; i--) {
        printf("%d ", i);


    }

    printf("\n");

    return 0;


}
