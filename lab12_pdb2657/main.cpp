/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on March 19, 2015, 2:46 PM
 */

#include <iostream>

using namespace std;

class account {
public:
    string accountId;
    double amount;
};

class accManager {
public:
    accManager();
    accManager(int acc);
    accManager(const accManager &s);
    ~accManager();
    void addAccount(string accId, double amount);
    double getAmountDiposited(string ID);
    int deposit(string accId, double amount);
    int withdraw(string accId, double amount);
private:
    account *accounts;
    int nEl;
    int nAcc;

};

accManager::accManager() {
    accounts = new account[3];
    nEl = 3;
    nAcc = 0;
}

accManager::accManager(const accManager& a) {
    nEl = a.nEl;
    nAcc = a.nAcc;
    for (int i = 0; i < nEl; i++) {
        accounts[i] = a.accounts[i];
    }


}

void accManager::addAccount(string accId, double amount) {
    if (nEl <= nAcc) {
        account *temp = new account[nEl + 1];
        for (int i = 0; i < nEl; i++) {
            temp[i].accountId = accounts[i].accountId;
            temp[i].amount = accounts[i].amount;
        }
        delete[]accounts;
        accounts = temp;
        nEl++;
    }
    if (nEl > nAcc) {
        accounts[nAcc].accountId = accId;
        accounts[nAcc].amount = amount;
        nAcc++;
    }
}

double accManager::getAmountDiposited(string ID) {
    for (int i = 0; i < nEl; i++) {
        if (accounts[i].accountId == ID) {
            return accounts[i].amount;
        }
    }
    return -1;
}

int accManager::deposit(string accId, double amount) {

    for (int i = 0; i < nEl; i++) {
        if (accounts[i].accountId == accId && amount > 0) {
            accounts[i].amount += amount;
            return true;


        }
        return false;
    }
}

int accManager::withdraw(string accId, double amount) {

    for (int i = 0; i < nEl; i++) {
        if (accounts[i].accountId == accId) {
            if (amount <= accounts[i].amount) {
                accounts[i].amount -= amount;
                return true;
            }
        }

    }
    return false;
}

accManager::~accManager() {
    delete[]accounts;
}

int main() {

    accManager bank;
    bank.addAccount("Phil", 6969);
    bank.addAccount("Emmanuel", 1234);
    bank.addAccount("Frank", 4321);
    bank.addAccount("TA", 1);

    cout << bank.deposit("Phil", 20000) << endl;
    cout << bank.withdraw("Emmanuel", 10) << endl;
    cout << bank.getAmountDiposited("Phil");


    return 0;
}






