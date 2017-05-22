/* 
 * File:   SavingsAccount.cpp
 * Author: fdd5501
 * 
 * Created on March 18, 2015, 3:40 PM
 */

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {
    
    
}

double SavingsAccount::SAWithdraw(double aWithdraw){

    if(this->getBalance()-aWithdraw<0){
        return this->getBalance();
    }else{
        this->withdraw(aWithdraw);
        return this->getBalance();
    }

}
