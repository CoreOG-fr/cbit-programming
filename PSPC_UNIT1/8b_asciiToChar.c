#include <stdio.h>

int main() {
    int val;

    printf("Enter ASCII value: ");
    scanf("%d", &val);

    printf("Character for ASCII value %d is '%c'\n", val, val);

    return 0;


}
