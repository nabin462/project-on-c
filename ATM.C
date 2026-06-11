//WAP to display the ATM system
#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    while(1) {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful!\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                }
                break;

            case 4:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
