/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on January 29, 2015, 12:33 PM
 */

#include <iostream>

using namespace std;

double x,y;
int main() {
    cout << "Enter two points: ";
    cin >> x>>y;
    
    if(10/x>=x && 5/y>=y)
        cout << "Point ("<<x<<","<<y<<") is in the rectangle.";
    else
        cout << "Point ("<<x<<","<<y<<") is not in the rectangle.";
    
    
    return 0;
}

