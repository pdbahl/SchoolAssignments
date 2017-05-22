/* 
 * File:   CheckingAccount.cpp
 * Author: fdd5501
 * 
 * Created on March 18, 2015, 3:40 PM
 */

#include "CheckingAccount.h"
#include "Account.h"

CheckingAccount::CheckingAccount(){
    ODL=-500;
}

double CheckingAccount::CAWithdraw(double aWithdraw){
    if(this->getBalance()-aWithdraw <ODL){
        return this->getBalance();
    }else{
        this->withdraw(aWithdraw);
        return this->getBalance();
    }
    

}

