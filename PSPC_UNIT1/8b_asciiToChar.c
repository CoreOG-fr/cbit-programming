/*
    program to print character based on ascii value
    u enter an ascii number and it shows what character it is
*/

#include <stdio.h>

int main() {
    int asciiValue;

    printf("Enter ASCII value: ");
    scanf("%d", &asciiValue);

    printf("Character for ASCII value %d is '%c'\n", asciiValue, asciiValue);

    return 0;
}
