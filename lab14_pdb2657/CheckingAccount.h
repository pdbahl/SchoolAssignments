/* 
 * File:   CheckingAccount.h
 * Author: fdd5501
 *
 * Created on March 18, 2015, 3:40 PM
 */

#ifndef CHECKINGACCOUNT_H
#define	CHECKINGACCOUNT_H
#include "Account.h"


class CheckingAccount : public Account {
public:
    CheckingAccount();
    double CAWithdraw(double aWithdraw);
private:
    double ODL;

};

#endif	/* CHECKINGACCOUNT_H */

