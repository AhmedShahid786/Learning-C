#include <stdio.h>

int main(){
    int r;

    printf("\n Enter radius of circle: \n");
    scanf("%d", &r);

    float area = 3.14 * (r*r);

    printf("\n Area of circle is: %f", area);

    return 0;
}