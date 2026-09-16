#include <stdio.h>

int main(){
    int age = 0;
    
    printf("Enter age to check vote eligibility: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible to vote");
    }
}
