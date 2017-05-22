/* 
 * File:   SavingsAccount.h
 * Author: fdd5501
 *
 * Created on March 18, 2015, 3:40 PM
 */

#ifndef SAVINGSACCOUNT_H
#define	SAVINGSACCOUNT_H
#include "Account.h"

class SavingsAccount:public Account {
public:
    SavingsAccount();
    double SAWithdraw(double aWithdraw);
private:
    

};

#endif	/* SAVINGSACCOUNT_H */

