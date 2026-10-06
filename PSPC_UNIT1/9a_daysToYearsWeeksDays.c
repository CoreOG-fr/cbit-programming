#include <stdio.h>

int main() {
    int d, y, w, rd;

    printf("Enter total number of days: ");
    scanf("%d", &d);

    y = d / 365;
    rd = d % 365;
    w = rd / 7;
    rd = rd % 7;

    printf("Years = %d\n", y);
    printf("Weeks = %d\n", w);
    printf("Remaining Days = %d\n", rd);

    return 0;


}
