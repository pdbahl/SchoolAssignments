/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on April 27, 2015, 10:21 AM
 */

#include <iostream>
#include "Circle.h"
using namespace std;

template<class generic>
int getIndexOfMax(generic array[],int size);
int main() {
    const int size = 5;
    
    int a1[size] ={1,2,3,4,5};
    cout<< getIndexOfMax(a1,size)<<endl;
    double a2[size]={1.2,3.4,5.6,7.8,9.0};
    cout<< getIndexOfMax(a1,size)<<endl;
    string a3[size] = {"a","aa","aaa","aaaa","aaaaa"};
    cout<< getIndexOfMax(a3,size)<<endl;
    Circle a4[size] = {3,2,5,7,1};
    cout<< getIndexOfMax(a4,size);
    return 0;
}

template<class generic>
int getIndexOfMax(generic array[],int size){
    generic max = array[0];
    int maxIndex;
    for(int i = 0;i<size;i++){
        if(array[i]>max){
            max = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
