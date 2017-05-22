#include <iostream>
#include <string>
#include "StockItems.h"
#include "Portfolio.h"

Portfolio::Portfolio() {
    s = new StockItems[5];
    nSize = 3;
    nItems = 0;
}

int Portfolio::getNItems() {
    return nItems;
}

StockItems Portfolio::getIObject(int i) {
    if (i <= nItems || i >= 0) {
        return s[i];
    } else {
        return StockItems();
    }
}

bool Portfolio::addStockItem(string symb, double b, double c) {
    for(int i =0;i<nItems;i++){
        if(s[i].getSymb()==symb){
            return false;
        }
    }
    if (nSize <= nItems) {
        StockItems *temp = new StockItems[nSize + 1];
        for (int i = 0; i < nSize; i++) {
            temp[i] = StockItems(s[i]);
        }
        delete[]s;
        s = temp;
        nSize++;
    }
    if (nSize > nItems) {
        s[nItems] = StockItems(symb,b,c);
        nItems++;
    }
}
Portfolio::~Portfolio(){
    delete[]s;
}

StockItems Portfolio::validSymb(string symb){
    for(int i = 0;i<nSize;i++){
        if(s[i].getSymb()==symb){
            return s[i];
        }
    }
    return StockItems();
}
