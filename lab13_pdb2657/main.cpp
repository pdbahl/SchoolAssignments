#include <iostream>
#include "Circle.h"
#include <fstream>
using namespace std;


int main() {
    
    
    
    Circle a(4.4);
    Circle b(4.3);
    Circle c;
    c = a +b;
    if (a == b) 
        cout << "a == b\n";
    else
        cout << "a not == b\n";
    
    if (a == c)
        cout << "a == c\n";
    else
        cout << "a not == c\n";

    if (a != b) cout << "a not equal b\n";
    if (a < b) cout << "a less b\n";
    if (a <= b) cout << "a less or equal b\n";
    if (a > b) cout << "a greater b\n";
    if (a >= b) cout << "a greater or equal b\n";
    cout <<"the a+b = " <<c<<endl;
    
            
     ofstream outfile("data.txt");
    
    Circle pv(4.1);
    outfile << pv;
    pv = Circle(4.2);
    outfile << pv;
    pv = Circle(4.3);
    outfile << pv;
    outfile.close();
    
    ifstream infile("data.txt");
    Circle tv;
    infile >> tv;
    while (!infile.eof()) {
        cout << tv;
        infile >> tv;
    }
    
    return 0;
}

