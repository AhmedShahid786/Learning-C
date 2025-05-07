#include <stdio.h>

int main(){
    int length, width;

    printf("\n Enter length of rectangle (meters) \n");
    scanf("%d", &length);

    printf("\n Enter width of rectangle (meters) \n");
    scanf("%d", &width);

    int area = length * width;
    printf("\n Area of rectangle is %d square meters", area);

    return 0;
}