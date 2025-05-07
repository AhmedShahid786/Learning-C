#include <stdio.h>

int main(){
    int a,b;
    
    // Print a new line before the first pattern
    printf("\n");
    
    // First loop, determines the number of lines
    for (a = 1; a < 11; a++){
        
        // Nested loop, determines the number of stars in each line
        for (b = 0; b < a; b++){
            printf("*");
        }
        
        // Print new line when all stars for the current count are printed.
        printf("\n");
    }
    
    /*
    Output:
    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
    *********
    **********
    */
    
    // Print a new line before the second pattern
    printf("\n");

    for (a = 10; a > 0; a--){
        for (b = 0; b < a; b++){
    printf("*");
    }
    printf("\n");
    }
    
    /*
    Output:
    **********
    *********
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *

    */

    return 0;
}