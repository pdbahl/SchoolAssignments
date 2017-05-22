/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on January 22, 2015, 12:35 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    double x1,y1,x2,y2;
    cout<<"please enter the coordinates of two points: "<<endl;
    cin>>x1>>y1>>x2>>y2;
    cout << "the slope is "<< (y2-y1)/(x2-x1);
    
    

    return 0;
}

