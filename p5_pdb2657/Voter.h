/* 
 * File:   Voter.h
 * Author: pdb2657
 *
 * Created on April 30, 2015, 8:45 PM
 */
#include <iostream>

#ifndef VOTER_H
#define	VOTER_H
using namespace std;

class Voter {
    friend istream & operator >> (istream &in,  Voter &a);
    friend ostream & operator << (ostream &out, Voter &a);
public:
    Voter();
    Voter(int ID,string FN,string LN,string VOTE);
    virtual ~Voter();
    int getId();
    string getLn();
    string getFn();
    string getVote();
    void setVote();
    private:
    int id;
    string fn;
    string ln;
    string vote;

};

#endif	/* VOTER_H */

