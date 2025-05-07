#include <stdio.h>

int main(){
    int num1, num2;

    printf("\n Enter num 1: \n");
    scanf("%d", &num1);

    printf("\n Enter num 2: \n");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("\n Num1 is greater than num2: %d > %d", num1, num2);
    }else if(num2 > num1){
        printf("\n Num2 is greater than num1: %d > %d", num2, num1);
    }

    return 0;
}