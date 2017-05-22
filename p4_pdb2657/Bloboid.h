/* 
 * File:   Bloboid.h
 * Author: pdb2657
 *
 * Created on April 16, 2015, 8:57 PM
 */


#ifndef BLOBOID_H
#define	BLOBOID_H
#include <iostream>
using namespace std;
#include "Alien.h"


class Bloboid :public Alien {
    friend istream & operator >> (istream &in,  Bloboid &b);
    friend ostream & operator << (ostream &out, Bloboid &b);
    
public:
    Bloboid();
    Bloboid(string home, string breaths, string food,string goo, int numTent);
    virtual ~Bloboid();
    string getGoo();
    int getNumTent();
    void setNumTent(int);
    void setGoo(string);
    bool operator ==(const Bloboid&b);
private:
    string goo;
    int numTent;
};

#endif	/* BLOBOID_H */
