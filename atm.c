#include <stdio.h>
#include <conio.h>

int main(){
    int total_balance = 0;
    char option;

    while (1){
        printf("\n --- ATM Menu --- \n");
        printf("Press d for cash deposit \n");
        printf("Press w for cash withdrawal \n");
        printf("Press c to check account balance \n");
        printf("Press q to quit \n\n");
        
        option = getch();

        switch (option) {
            case 'd': {
                int deposit_amount;
                printf("\n Your current balance is: %d \n", total_balance);
                printf("\n Enter deposit amount: \n");
                scanf("%d", &deposit_amount);
                total_balance = total_balance + deposit_amount;
                printf("\n Deposit successful. Your updated balance is: %d \n", total_balance);
                break;
            }
            case 'w': {
                int withdrawal_amount;
                printf("\n Your current balance is: %d \n", total_balance);
                printf("\n Enter withdrawal amount: \n");
                scanf("%d", &withdrawal_amount);

                if (withdrawal_amount > total_balance){
                    printf("\n Insufficient funds :( \n");
                    break;
                }

                total_balance = total_balance - withdrawal_amount;
                printf("\n Withdrawal successful. Your updated balace is: %d \n", total_balance);
                break;
            }
            case 'c': {
                printf("\n Your current balance is: %d \n", total_balance);
                break;
            }
            case 'q': {
                printf("\n Thanks for using our ATM :) \n");
                return 0;
            }
            default: {
                printf("\n Invalid option \n");
                break;
            }
        }
    }
    return 0;
}