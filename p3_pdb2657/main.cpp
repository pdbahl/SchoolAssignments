// Author : Phillip Bahlinger
// CLID : pdb2657
// CMPS 260
// Programming Project : #2
// Due Date : 3/31
// Due Time : 11:55 PM
// Program Description: stores values of a read file into arrays and displays stats about that said data
// Certificate of Authenticity:   (Choose one of the two following forms:)I certify that the code in the implemented constructors and functions and the demonstration code 
//in function main of this project are entirely my own work. 

#include <iostream>
#include <fstream>
#include "StockItems.h"
#include "Portfolio.h"

using namespace std;

int main() {


    Portfolio p;
    ifstream infile;
    infile.open("portfolio.txt");
    string x;
    double y, z;

    while (infile) {
        infile >> x >> y>>z;
        p.addStockItem(x, y, z);
    }
    int a;
    cout << "What would you like to do?" << endl << "1:Add new StockItem" << endl << "2:Price Check" << endl << "3:Change Current Price" << endl << "4:Change Previous Day's Price" << endl << "0:exit" << endl;
    cin>>a;
    while (a != 0) {
        if (a == 1) {
            string q;
            double w, e;
            cout << "Please enter a symbol, a Before Price, and a Current Price: ";
            cin >> q >> w >> e;
            p.addStockItem(q, w, e);
        } else if (a == 2) {
            string o;
            cout << "Enter a symbol to check the prices: ";
            cin >>o;

            cout << "Symbol: " << p.validSymb(o).getSymb() << endl <<
                    "Previous Day's price: " << p.validSymb(o).getBeforePrice() << endl <<
                    "Current Price: " << p.validSymb(o).getCurrentPrice() << endl <<
                    "Percent of Change: " << p.validSymb(o).pDiffer() << endl<<endl;
        } else if (a == 3) {
            string a;
            double b;
            cout << "Enter a symbol and change the current price: ";
            cin >> a>>b;
            p.validSymb(a).setCurrentPrice(b);
            cout << "Price changed." << endl;
        } else if (a == 4) {
            string a;
            double b;
            cout << "Enter a symbol and change the current price: ";
            cin >> a>>b;
            p.validSymb(a).setBeforePrice(b);
            cout << "Price changed.";
        }
        cout << "What would you like to do?" << endl << "1:Add new StockItem" << endl << "2:Price Check" << endl << "3:Change Current Price" << endl << "4:Change Previous Day's Price" << endl << "0:exit" << endl;
        cin>>a;
        ofstream outfile("portfolio.txt");
        for (int i = 0; i < p.getNItems(); i++) {
            outfile << p.getIObject(i).getSymb()<<"   " << p.getIObject(i).getBeforePrice() <<"   " << p.getIObject(i).getCurrentPrice() << endl;
        }
    }
    return 0;
}
