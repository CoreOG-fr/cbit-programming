#include <stdio.h>

int fact(int n) {

    int f =1;
    for (int i = 1; i<= n; i++)
        f*= i;
    return f;
}

int isStrong(int n) {
    int o =n, sum= 0;
    while (n>0) {
        int dig = n%10;
        sum+=fact(dig);
        n/= 10;
    }
    return (sum == o);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isStrong(n) == 1)
        printf("%d is strong\n", n);
    else
        printf("%d is not strong\n", n);
    return 0;
}
