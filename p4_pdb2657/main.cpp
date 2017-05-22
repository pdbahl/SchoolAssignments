// Author : Phillip Bahlinger
// CLID : pdb2657
// CMPS 260
// Programming Project : #4
// Due Date : 4/24
// Due Time : 11:55 PM
// Program Description: stores values of a read file into arrays and displays stats about that said data
// Certificate of Authenticity:   (Choose one of the two following forms:)I certify that the code in the implemented constructors and functions and the demonstration code 
//in function main of this project are entirely my own work.
#include <iostream>
#include <fstream>
#include "Alien.h"
#include "Bloboid.h"
#include "Animaloid.h"
#include "Humanoid.h"
using namespace std;

int main() {
   
    Bloboid b1("Baton Rouge","Oxygen","Chicken","Honey",1);
    Bloboid b2("Lafayette","Oxygen","Hamburgers","Candy",2);
    Humanoid a1("Merica","Nitrogen","Chinese Food",1,2,1,2,2);
    Humanoid a2("Merica","Nitrogen","Chinese Food",1,2,1,2,2);
   
    
    cout << "Bloboid:\n";
    cout << "Bloboid1:\nhome: "<<b1.getHomeWorld()<<endl<<"Breahtes: " << b1.getBreaths()<<endl<<"Food: "<< b1.getFood()<<endl<<"Goo: " <<b1.getGoo() << endl << "Tentacles: "<< b1.getNumTent()<<endl;
    cout << "Bloboid 1 and 2 are equal: " << b1.operator ==(b2)<<endl<<endl;
    
    cout << "Humanoid:\n";
    cout << "Humanoid1:\nhome: "<<a1.getHomeWorld()<<endl<<"Breahtes: " << a1.getBreaths()<<endl<<"Food: "<< a1.getFood()<<endl<<"Eyes: " <<a1.getEyes() <<endl<<"Ears: " <<a1.getEars()<<endl<<"Arms: " <<a1.getArms() <<endl<<"Head: " <<a1.getHeads() <<endl<<"Legs: " <<a1.getLegs() <<endl;
    cout << "Humanoid 1 and 2 are equal: " << a1.operator ==(a2)<<endl<<endl;
    
    
    ofstream outfile("Animaloid.txt");
    
    Animaloid h1("OliverHall","Heleium","CornDog",11,22,1,22,1);
    outfile << h1;
    outfile.close();
    Animaloid tv;
    
    ifstream infile("Animaloid.txt");
    infile >> tv;
    
    while (!infile.eof()) { 
        cout<<tv;
        infile >> tv; 
       
    }
    
  
    
    
    
    
    
    return 0;
}

