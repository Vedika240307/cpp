#include <iostream>
using namespace std;
class BankAccount {
    string name;
    int accountNumber;
    double balance;
    public:
    void Data(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
 int main() {
    BankAccount acc;
    acc.Data("Vedika", 12345, 5000);
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();
 }