#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter 2 numbers num1 and num2 to check greatest of two: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d > %d", num1, num2);

    } else if (num1 == num2) {
        printf("%d = %d", num1, num2);

    } else {
        printf("%d < %d", num1, num2);
    }
}
