#include <stdio.h>

int main() {
    int n;

    printf("Enter no. to check if it is even or odd: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even");


    }
    else {
        printf("Odd");


    }

    return 0;


}
