#include <stdio.h>

int main() {
    float bp, hra, da, ta, gs;

    printf("Enter Basic Pay: ");
    scanf("%f", &bp);

    hra = 0.40 * bp;
    da = 0.20 * bp;
    ta = 0.10 * bp;
    gs = bp + hra + da + ta;

    printf("HRA (40%% of Basic) = %.2f\n", hra);
    printf("DA  (20%% of Basic) = %.2f\n", da);
    printf("TA  (10%% of Basic) = %.2f\n", ta);
    printf("Gross Salary = %.2f\n", gs);

    return 0;


}
