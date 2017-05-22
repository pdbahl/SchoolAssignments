#include <iostream>
#include "SafeArray.h"
#include "Circle.h"
using namespace std;

int main() {

    SafeArray<double> sa(6);
    
    sa[-1] = -99.9;
    sa[0] = 1.2;
    sa[1] = 2.3;
    sa[2] = 3.4;
    sa[3] = 4.5;
    sa[4] = 5.6;
    sa[5] = 6.7;
    sa[6] = 7.8;
    sa[7] = 8.9;
    sa[8] = 9.1;
    
    SafeArray<double> a1(5);
    a1[0] =1.2 ;
    a1[1] = 3.4;
    a1[2] = 5.6;
    a1[3] = 7.8;
    a1[4] = 9.0;
    
    SafeArray<string> a2(5);
    a2[0] = "a" ;
    a2[1] = "aa";
    a2[2] = "aaa";
    a2[3] = "aaaa";
    a2[4] = "aaaaa";
    
    SafeArray<Circle> a3(5);
    a3[0] = 1.2;
    a3[1] = 3.4;
    a3[2] = 5.6;
    a3[3] = 7.8;
    a3[4] = 9.0;

    
    cout <<"Double:\n"<<"index at 2: " << a1.operator [](2)<<endl<<"Size: " << a2.getSize()<<endl<<endl;
    cout <<"String:\n"<<"index at 2: " << a2.operator [](2)<<endl<<"Size: " << a2.getSize()<<endl<<endl;
    cout <<"Circle:\n"<<"index at 2: " << a2.operator [](2)<<endl<<"Size: " << a2.getSize()<<endl<<endl;
    
    
    
    return 0;
}

