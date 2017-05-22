/* 
 * File:   Alien.h
 * Author: Frank Ducrest
 */

#ifndef ALIEN_H
#define	ALIEN_H

#include <string>

using namespace std;

class Alien {

public:
    
    Alien();
    // default constructor
    // sets homeWorld to "Cleveland", breaths to "smog" and food to "pizza"
    
    Alien(string initHomeWorld, string initBreaths, string initFood);
    // constructor
    // if initHomeWorld's length is greater than 0, sets homeWorld to the value
    // of initHomeWorld, otherwise sets homeWorld to "Cleveland"; if 
    // initBreaths' length is greater than 0, sets breaths to the value of 
    // initBreath, otherwise sets breaths to "smog"; if initFood's length is 
    // greater than 0, sets food to the value of initFood, otherwise sets 
    // food to "pizza"
    
    string getHomeWorld();
    // returns the value of homeWorld
    
    string getBreaths();
    // returns the value of breaths
    
    string getFood();
    // returns the value of food
    
private:
    
    string homeWorld;   // home world of the alien
    
    string breaths;     // what the alien breaths
    
    string food;        // what the alien eats
};

#endif	/* ALIEN_H */

