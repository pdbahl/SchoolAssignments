#include "StockItems.h"
#include <iostream>

StockItems::StockItems(){
    symb = "-none-";
    bp = 0;
    cp = 0;
}

StockItems::StockItems(string s,double b,double c){
    if((s == " ")  || (b<0)||(c<0)){
        symb = "-none-";
        bp=0;
        cp=0;
    }else{
        symb =s;
        bp=b;
        cp=c;
    }
}

string StockItems::getSymb(){
    return symb;
}

double StockItems::getBeforePrice(){
    return bp;
}

double StockItems::getCurrentPrice(){
    return cp;
}

void StockItems::setBeforePrice(double b){
    if(b>0){
        bp=b;
    }
    
}

void StockItems::setCurrentPrice(double c){
    if(c>0){
        cp = c;
    }
}

double StockItems::pDiffer(){
    return ((cp-bp)/bp)*100;

}

