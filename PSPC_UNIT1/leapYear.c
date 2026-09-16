/*
    program to check if a given year is a leap year or not
    u enter the year and it tells u
    leap year is divisible by 4
    but if it is divisible by 100 then it must also be divisible by 400
*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is not a Leap Year\n", year);
    }

    return 0;
}
