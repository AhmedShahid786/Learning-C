#include <stdio.h>

int main(){
    int num, i;

    printf("\n Enter a num: \n");
    scanf("%d", &num);

    printf("\n ------ Table of %d ------ \n", num);

    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", num, i, num * i);
    }

    return 0;
}