/*
    program to convert total number of days to years, weeks and remaining days
    u enter total days and it breaks it down
    1 year = 365 days, 1 week = 7 days
*/

#include <stdio.h>

int main() {
    int totalDays, years, weeks, remainingDays;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    remainingDays = totalDays % 365;

    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Remaining Days = %d\n", remainingDays);

    return 0;
}
