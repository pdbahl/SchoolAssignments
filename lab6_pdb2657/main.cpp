/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on February 5, 2015, 12:28 PM
 */

#include <iostream>

using namespace std;

double meterToFoot(double meter);
double footToMeter(double foot);
int main() {
    
    cout<<"Feet\tMeters\t|\tMeters\tFeet"<<endl;
    double j=20.0;
    for(double i=1.0;i<11.0;i+=1.0,j+=5.0){
        cout<<i<<"\t"<<footToMeter(i)<<"\t|\t"<<j<<"\t"<<meterToFoot(j)<<endl;
    }
    
    return 0;
}

double meterToFoot(double meter){
    return meter/.305;
}

double footToMeter(double foot){
        return .305 * foot;
}