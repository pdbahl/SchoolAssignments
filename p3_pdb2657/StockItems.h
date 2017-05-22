/* 
 * File:   StockItems.h
 * Author: pdb2657
 *
 * Created on March 26, 2015, 3:35 PM
 */

#ifndef STOCKITEMS_H
#define	STOCKITEMS_H
#include <string>
using namespace std;

class StockItems{
public:
    StockItems();
    StockItems(string s,double b, double c);
    string getSymb();
    double getBeforePrice();
    double getCurrentPrice();
    void setBeforePrice(double b);
    void setCurrentPrice(double c);
    double pDiffer();
    
    
private:
    string symb;
    double bp;
    double cp;
    

};


#endif	/* STOCKITEMS_H */

