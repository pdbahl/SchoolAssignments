#include "Account.h"

Account::Account() {
    id = 0;
    balance = 0;
    annualInterestRate = 0;
}

Account::Account(int id, double balance, double annualInterestRate) {
    this->id = id;
    this->balance = balance;
    this->annualInterestRate = annualInterestRate;
}

int Account::getId() const {
    return this->id;
}

double Account::getBalance() const {
    return balance;
}

double Account::getAnnualInterestRate() const {
    return annualInterestRate;
}

void Account::setId(int id) {
    this->id = id;
}

void Account::setBalance(double balance) {
    this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate) {
    this->annualInterestRate = annualInterestRate;
}

double Account::getMonthlyInterest() const {
    return balance * (annualInterestRate / 1200);
}

void Account::withdraw(double amount) {
    balance -= amount;
}

void Account::deposit(double amount) {
    balance += amount;
}
