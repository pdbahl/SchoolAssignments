/* 
 * File:   Alien.h
 * Author: Frank Ducrest
 */

#include "Alien.h"

Alien::Alien() {
    homeWorld = "Cleveland";
    breaths = "smog";
    food = "pizza";
}

Alien::Alien(string initHomeWorld, string initBreaths, string initFood) {
    if (initHomeWorld.length() > 0)
        homeWorld = initHomeWorld;
    else
        homeWorld = "Cleveland";
    
    if (initBreaths.length() > 0)
        breaths = initBreaths;
    else
        breaths = "smog";
    
    if (initFood.length() > 0)
        food = initFood;
    else
        food = "pizza";
}

string Alien::getBreaths() {
    return breaths;
}

string Alien::getFood() {
    return food;
}

string Alien::getHomeWorld() {
    return homeWorld;
}
