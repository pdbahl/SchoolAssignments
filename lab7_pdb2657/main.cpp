/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on February 5, 2015, 12:46 PM
 */

#include <iostream>

using namespace std;

void sort(double&num1,double&num2, double&num3);

int main() {

    double x,y,z;
    cin >> x>>y>>z;
    sort(x,y,z);
    return 0;
}

void sort(double &num1, double &num2, double &num3){
    if(num1>num2){
        double tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    if(num1>num3){
        double tmp = num1;
        num1=num3;
        num3 = tmp;
    }
    if(num2>num3){
        double tmp = num2;
        num2=num3;
        num3=tmp;
    }
    cout << num1<<" "<<num2<<" "<<num3;
    
}
