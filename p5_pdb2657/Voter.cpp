/* 
 * File:   Voter.cpp
 * Author: pdb2657
 * 
 * Created on April 30, 2015, 8:45 PM
 */

#include "Voter.h"

Voter::Voter() {
    id =-1;
    fn = "John";
    ln = "Doe";
    vote = "FALSE";
}

Voter::Voter(int ID, string FN,string LN,string VOTE){
    
    if(ID >0){id = ID;}else{id = -1;}
    if(FN.length()<0){fn="John";}else{fn = FN;}
    if(LN.length()<0){ln = "Doe";}else{ln = LN;}
    if(VOTE != "TRUE" || VOTE !="FALSE"){vote = VOTE;}else{vote = "FALSE";}
    
}

Voter::~Voter() {
}

int Voter::getId(){
    return id;
}

string Voter::getFn(){
    return fn;
}
string Voter::getLn(){
    return ln;
}
string Voter::getVote(){
    return vote;
}
void Voter::setVote(){
    vote = "TRUE";
}

ostream & operator << (ostream &out, Voter &v){
    int a = v.id;
    string b = v.fn;
    string c = v.ln;
    string d = v.vote;
    out << a <<endl<< b<<endl  << c<<endl << d<<endl; 
    return out;
}
istream & operator >> (istream &in, Voter &v){
    int id;
    string fn,ln,vote;
    
    in >> id >> fn>> ln>>vote;
    v = Voter(id,fn,ln,vote);
    return in;
}
