/* 
 * File:   main.cpp
 * Author: 
 * Lab #14
 */

#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    
    
    
    CheckingAccount c;
    c.CAWithdraw(501);
    cout<<c.getBalance()<<endl;
    
    SavingsAccount s;
    s.SAWithdraw(1);
    cout << c.getBalance();
   
    return 0;
}

