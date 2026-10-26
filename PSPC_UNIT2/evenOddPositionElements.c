#include <stdio.h>

int main() {
    int a[100], n, i;

    printf("Enter size of array (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;


    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);


    }

    printf("Elements at odd positions: ");
    for (i = 0; i < n; i = i + 2) {
        printf("%d ", a[i]);


    }
    printf("\nElements at even positions: ");
    for (i = 1; i < n; i = i + 2) {
        printf("%d ", a[i]);


    }
    printf("\n");

    return 0;


}
