/* 
 * File:   Account.h
 * Author: fdd5501
 *
 * Created on March 18, 2015, 2:20 PM
 */

#ifndef ACCOUNT_H
#define	ACCOUNT_H

class Account {
public:
    Account();
    Account(int id, double balance, double annualInterestRate);
    int getId() const;
    double getBalance() const;
    double getAnnualInterestRate() const;
    void setId(int id);
    void setBalance(double balance);
    void setAnnualInterestRate(double annualInterestRate);
    double getMonthlyInterest() const;
    void withdraw(double amount);
    void deposit(double amount);
private:
    int id;
    double balance;
    double annualInterestRate;
};

#endif	/* ACCOUNT_H */
