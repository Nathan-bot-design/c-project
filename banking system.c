//1.NATHAN KINGORI MACHIRA ENE212-0082/2021 
//2.
//3.
//4.
//5.
#include <stdio.h>

// Structure to represent a bank account
struct BankAccount {
    int accountNumber;
    float balance;
};

// Function to deposit money into an account
void deposit(struct BankAccount *account, float amount) {
    account->balance += amount;
    printf("Deposit successful. Current balance: %.2f\n", account->balance);
}

// Function to withdraw money from an account
void withdraw(struct BankAccount *account, float amount) {
    if (amount > account->balance) {
        printf("Insufficient balance\n");
    } else {
        account->balance -= amount;
        printf("Withdrawal successful. Current balance: %.2f\n", account->balance);
    }
}

// Function to check the balance of an account
void checkBalance(struct BankAccount account) {
    printf("Account balance: %.2f\n", account.balance);
}

int main() {
    // Create a bank account
    struct BankAccount account;
    account.accountNumber = 123456789;
    account.balance = 1000.00; // Initial balance

    // Menu-driven program
    int choice;
    float amount;
    do {
        printf("\nBanking System Menu\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&account, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&account, amount);
                break;
            case 3:
                checkBalance(account);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
