/* 
 * File:   main.cpp
 * Author: pdb2657
 *
 * Created on February 12, 2015, 12:19 PM
 */

#include <iostream>

using namespace std;

bool isEqual(const int list1[],const int lsit2[],int size);
int main() {
    int size;
    cout << "Please enter the size: ";
    cin >> size;
    int nums1[size],nums2[size];
    cout << "Please enter the first list:";
    for(int i = 0;i<size;i++){
        cin >> nums1[i];
    }
    cout << "Please enter the second list:";
    for(int i = 0;i<size;i++){
        cin >> nums2[i];
    }
    if(isEqual(nums1,nums2,size)){
        cout << "The two lists are equal!";
    }else{cout << "The two lists are not equal!";}  
    return 0;
}
bool isEqual(const int list1[],const int list2[],int size){
    int counter = 0;
    for(int i = 0;i<size;i++){
        if(list1[i]==list2[i]){
            counter++;
        }
    }
    if(counter == size){return true;}else{return false;}
}
