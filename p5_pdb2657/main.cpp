//// Author : Phillip Bahlinger
// CLID : pdb2657
// CMPS 260
// Programming Project : #5
// Due Date : 5/2
// Due Time : 11:55 PM
// Program Description: stores values of a read file into arrays and displays stats about that said data
// Certificate of Authenticity:   (Choose one of the two following forms:)I certify that the code in the implemented constructors and functions and the demonstration code 
//in function main of this project are entirely my own work.

#include <iostream>
#include <vector>
#include <fstream>
#include "Voter.h"
using namespace std;

int main() {
    ifstream infile("voters.txt");
    ofstream outfile("audit.txt",ios::app);
    
    int uID;
    Voter person;
    int pVote;
    vector<Voter> ballot;
    while (infile) {
        infile>>person;
        ballot.push_back(person);
    }
    infile.close();

    cout << "Please enter an ID(-1 to stop): ";
    cin >> uID;
    while (uID != -1) {
        for (int i = 0; i <ballot.size(); i++) {
            if (ballot[i].getId() == uID) {
                cout << "ID: " << ballot[i].getId() << endl
                        << "First name: " << ballot[i].getFn() << endl
                        << "Last name: " << ballot[i].getLn()
                        << endl << "Vote: " << ballot[i].getVote() << endl;
                pVote = i;
            }
        }
        int c;
        cout << "Do you want to change this peron's vote to TRUE? (yes = 1,no =0)" << endl;
        cin >>c;
        
        if (c == 1) {
            if(ballot[pVote].getVote()=="FALSE"){
            ballot[pVote].setVote();
            cout << "Vote changed.\n";
            outfile << ballot[pVote];
            }else{
                cout << "Already voted.\n";
            }
        }

        
        cout << "Please enter an ID(-1 to stop): ";
        cin>>uID;
       
    }
    ofstream voutfile("voters.txt");
        for (int i = 0; i < ballot.size()-1; i++) {
            voutfile << ballot[i];
        }

    outfile.close();
    voutfile.close();
    return 0;

}

