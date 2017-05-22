/* 
 * File:   Animaloid.cpp
 * Author: pdb2657
 * 
 * Created on April 16, 2015, 8:57 PM
 */

#include "Animaloid.h"

Animaloid::Animaloid() : Alien(){
    arms = 0;
    legs = 0;
    heads = 1;
    eyes = 1;
    ears = 1;
}

Animaloid::Animaloid(string homeWorld, string breaths, string food,
        int arms, int legs, int heads, int eyes, int ears):
        Alien(homeWorld,breaths,food) {

    if (arms >= 0) {
        this->arms = arms;
    } else {
        this->arms = 0;
    }
    if (legs >= 0) {
        this->legs = legs;
    } else {
        this->legs = 0;
    }
    if (heads >= 1) {
        this->heads = heads;
    } else {
        this->heads = 1;
    }
    if (ears >= 1) {
        this->ears = ears;
    } else {
        this->ears = 1;
    }
    if (eyes >= 1) {
        this->eyes = eyes;
    } else {
        this->eyes = 1;
    }
}

Animaloid::~Animaloid() {
}

int Animaloid::getArms(){return arms;}
int Animaloid::getEars(){return ears;}
int Animaloid::getEyes(){return eyes;}
int Animaloid::getHeads(){return heads;}
int Animaloid::getLegs(){return legs;}

void Animaloid::setArms(int arm){arms = arm;}
void Animaloid::setLegs(int leg){legs = leg;}
void Animaloid::setHeads(int head){heads =head;}
void Animaloid::setEyes(int eye){eyes = eye;}
void Animaloid::setEars(int ear){ears = ear;}

bool Animaloid::operator==(const Animaloid &a){
    if(arms == a.arms && ears == a.ears && eyes == a.eyes && heads == a.heads && legs == a.legs){
        return arms == a.arms,ears == a.ears,eyes==a.eyes, heads == a.heads,legs == a.legs; 
    }
}

ostream & operator<<(ostream &out, Animaloid &a){
    string home=a.getHomeWorld();
    string breath=a.getBreaths();
    string food = a.getFood();
   
    out << home <<" " << breath<<" "  << food<<" "  << a.arms<<" "   << a.ears<<" "  << a.eyes<<" "  << a.heads<<" " << a.legs;
    return out;
    }
istream & operator>>(istream &in,Animaloid &a){
    string home,breath,food;
    int arms,ears,eyes,heads,legs;
    
    in >> home >> breath >> food>> arms >> ears >> eyes>>heads>>legs;
    
    a=Animaloid(home,breath,food,arms,ears,eyes,heads,legs);
    return in;    
}


