#include <stdio.h>

int main(){
    int num = 0;

    printf("Enter no. to check if it is even or odd: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
