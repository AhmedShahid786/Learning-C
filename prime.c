#include <stdio.h>

int main(){
    int i, j, isPrime;

    printf("\n Prime numbers from 2-20 are: \n");

    for (i=2; i <= 20; i++){
        isPrime = 1;
        for (j = 2; j < i; j++){
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if (isPrime){
            printf("%d \n", i);
        }
    }

    return 0;
}