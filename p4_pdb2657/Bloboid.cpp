/* 
 * File:   Bloboid.cpp
 * Author: pdb2657
 * 
 * Created on April 16, 2015, 8:57 PM
 */

#include "Bloboid.h"

Bloboid::Bloboid() {
    goo="Honey";
    numTent =1;
}
Bloboid::Bloboid(string home,
        string breaths,string food,string g,
        int tent):Alien(home,breaths,food){
         
        goo = g;
        numTent=tent;
}
string Bloboid::getGoo(){
    return goo;
}    
int Bloboid::getNumTent(){
    return numTent;
}
void Bloboid::setNumTent(int Tent){
    numTent = Tent;
}
void Bloboid::setGoo(string Goo){
    goo = Goo;
}
Bloboid::~Bloboid() {
}

ostream &operator <<(ostream &out,Bloboid &b){
    string home = b.getHomeWorld();
    string breath = b.getBreaths();
    string food = b.getFood();
    string goo = b.goo;
    int tent = b.numTent;
    out << home  << breath  << food  <<goo<<tent;
    return out;
}
istream &operator >>(istream &in,Bloboid &b){
string home,breath,food,goo;
    int tent;

    in >> home >> breath >> food>> goo>>tent;
    b=Bloboid(home,breath,food,goo,tent);
}
bool Bloboid::operator==(const Bloboid &a){
    if(goo == a.goo && numTent == a.numTent){
        return goo == a.goo,numTent ==a.numTent;
    }
}
