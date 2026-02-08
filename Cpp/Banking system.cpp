#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& accNum, double initialBalance) 
        : accountNumber(accNum), balance(initialBalance) {}

    // Deposit method
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit successful. Current balance: " << balance << std::endl;
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. Current balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient balance. Cannot withdraw." << std::endl;
        }
    }
};

int main() {
    std::string accNo = "SB-123";
    BankAccount account(accNo, 1000.0);

    std::cout << "A/c No: " << accNo << " Balance: 1000" << std::endl;
    account.deposit(1500);
    account.withdraw(750);
    account.withdraw(1800);  // Tests insufficient funds

    return 0;
}
