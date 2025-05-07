#include <stdio.h>

int main(){
    int i, num, fact = 1;

    printf("\n Enter a number to calculate factorial \n");
    scanf("%d", &num);

    if (num < 0){
        printf("\n Error: Input must be possitive integer. \n");
    }else{
        for (i = 1; i <= num; i++){
            fact = fact * i;
        }

        printf("\n Factorial of %d is %d", num, fact);
    }

    return 0;
}