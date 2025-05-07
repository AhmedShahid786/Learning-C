#include <stdio.h>
#include <math.h>

int main(){
    int num, i;

    printf("\n Enter a number: \n");
    scanf("%d", &num);

    printf("\n --- Power from 1-5 --- \n");

    for (i = 1; i <= 5; i++){
        printf("%d^%d = %.0f \n", num, i, pow(num, i));
    }

    return 0;
}