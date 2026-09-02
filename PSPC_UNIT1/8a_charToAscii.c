/*
    program to print ascii value of a given character
    u enter a character and it prints the ascii number
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
