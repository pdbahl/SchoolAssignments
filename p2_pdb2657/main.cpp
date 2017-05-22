// Author : Phillip Bahlinger
// CLID : pdb2657
// CMPS 260
// Programming Project : #2
// Due Date : 3/19
// Due Time : 11:55 PM
// Program Description: stores values of a read file into arrays and displays stats about that said data
// Certificate of Authenticity:   (Choose one of the two following forms:)I certify that the code in the implemented constructors and functions and the demonstration code 
//in function main of this project are entirely my own work. 
#include <iostream>
#include "Bowler.h"
using namespace std;

int main() {
    int nPlayers;
    cout << "how many players?";
    cin >> nPlayers;
    Bowler* players = new Bowler[nPlayers];
    string name;
    for (int i = 0; i < nPlayers; i++) {
        cout << "Please enter player number " << i + 1 << " of " << nPlayers << ":";
        cin >>name;
        players[i] = Bowler(name);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < nPlayers; j++) {
            int b1, b2;
            cout << "FRAME #" << i + 1 << "-How many pins did " << players[j].getName() << " knock over? ";
            cin >> b1;
            if(b1!=10){
                cin>>b2;
            }else{
                b2=0;        
            }
            players[j].enterPinsDownForCurrentFrame(b1,b2);

        }
}
    int max = 0;
    string pName;
    for(int i = 0;i<nPlayers;i++){
        if(max<players[i].getScore()){
            max = players[i].getScore();
            pName = players[i].getName();
        }
    }
    cout << "The winner is "<<pName<<" with a score of " << max;
    delete[] players;

return 0;
}
