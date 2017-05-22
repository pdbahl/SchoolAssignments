/* 
 * File:   Animaloid.h
 * Author: pdb2657
 *
 * Created on April 16, 2015, 8:57 PM
 */

#ifndef ANIMALOID_H
#define	ANIMALOID_H
#include <iostream>
using namespace std;
#include "Alien.h"

class Animaloid :public Alien {
    friend istream & operator >> (istream &in,  Animaloid &a);
    friend ostream & operator << (ostream &out, Animaloid &a);
public:
    Animaloid();
    Animaloid(string homeWorld, string breaths,string food,int arms,
            int legs, int heads, int eyes, int ears);
    virtual ~Animaloid();
    void setArms(int);
    void setLegs(int);
    void setHeads(int);
    void setEyes(int);
    void setEars(int);
    int getArms();
    int getLegs();
    int getHeads();
    int getEyes();
    int getEars();
    bool operator ==(const Animaloid&a);
    
private:
    int arms;
    int legs;
    int heads;
    int eyes;
    int ears;
    

};

#endif	/* ANIMALOID_H */

