/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on January 29, 2015, 12:41 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int a,b,ao,atemp;
    cout << "Enter two numbers ";
    cin >> a>>b;
    ao = a;
    
    if(a>b){
        atemp = a;
        a=b;
        b= atemp;
        ao = a;
    } 
    //while
    while(a<=b){
            cout << a<<" ";
            a++;
        }
    cout << endl;
    //do-while
    a = ao;
    do{
        cout << a << " ";
        a++;
    }while(a<=b);
    a = ao;
    cout << endl;
    //for
    for(a;a<=b;a++){
        cout << a << " "; 
    }
    
    return 0;
}

