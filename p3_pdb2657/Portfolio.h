/* 
 * File:   Portfolio.h
 * Author: pdb2657
 *
 * Created on March 26, 2015, 4:21 PM
 */

#ifndef PORTFOLIO_H
#define	PORTFOLIO_H
#include <string>
using namespace std;

class Portfolio{
public:
    Portfolio();
    ~Portfolio();
    int getNItems();
    StockItems validSymb(string symb);
    StockItems getIObject(int i);
    bool addStockItem(string symb,double b,double c);
    
private:
    StockItems *s;
    int nSize;
    int nItems;
    
};



#endif	/* PORTFOLIO_H */
