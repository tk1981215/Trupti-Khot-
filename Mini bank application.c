#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    int accNo;
    char name[50];
    float balance;
};

struct Account accounts[MAX_ACCOUNTS];
int numAccounts = 0;

void addAccount() {
    if (numAccounts >= MAX_ACCOUNTS) {
        printf("Maximum accounts reached!
");
        return;
    }
    struct Account newAcc;
    newAcc.accNo = numAccounts + 1;
    printf("Enter name: ");
    scanf("%s", newAcc.name);
    printf("Enter initial deposit: ");
    scanf("%f", &newAcc.balance);
    accounts[numAccounts] = newAcc;
    numAccounts++;
    printf("Account created: %d for %s
", newAcc.accNo, newAcc.name);
}

void deposit() {
    int accNo;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNo == accNo) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            if (amount > 0) {
                accounts[i].balance += amount;
                printf("Deposited %.2f. New balance: %.2f
", amount, accounts[i].balance);
            } else {
                printf("Invalid amount!
");
            }
            return;
        }
    }
    printf("Account not found!
");
}

void withdraw() {
    int accNo;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNo == accNo) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Withdrew %.2f. New balance: %.2f
", amount, accounts[i].balance);
            } else {
                printf("Invalid amount or insufficient balance!
");
            }
            return;
        }
    }
    printf("Account not found!
");
}

void checkBalance() {
    int accNo;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNo == accNo) {
            printf("Balance for %s (Acc %d): %.2f
", accounts[i].name, accNo, accounts[i].balance);
            return;
        }
    }
    printf("Account not found!
");
}

int main() {
    int choice;
    printf("=== Mini Bank Application ===
");
    do {
        printf("
1. Add Account
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: printf("Thank you!
"); break;
            default: printf("Invalid choice!
");
        }
    } while (choice != 5);
    return 0;
}
