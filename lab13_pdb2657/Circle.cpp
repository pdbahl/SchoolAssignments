/* 
 * File:   Circle.cpp
 * Author: Y. Daniel Liang
 */

#include "Circle.h"

// Construct a default circle object
Circle::Circle() {
    radius = 1;
}

// Construct a circle object
Circle::Circle(double newRadius) {
    radius = newRadius;
}

// Return the area of this circle
double Circle::getArea() {
    return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius() {
    return radius;
}

// Set a new radius
void Circle::setRadius(double newRadius) {
    radius = (newRadius >= 0) ? newRadius : 0;
}

bool Circle::operator ==(const Circle&s){
    return radius == s.radius;
}

bool Circle::operator !=(const Circle&s){
    return radius != s.radius;
}
bool Circle::operator <(const Circle&s){
    return radius < s.radius;
}
bool Circle::operator <=(const Circle&s){
    return radius <= s.radius;
}
bool Circle::operator >(const Circle&s){
    return radius > s.radius;
}
bool Circle::operator >=(const Circle&s){
    return radius >= s.radius;
}

Circle  Circle::operator +(const Circle& s){
    double newr = radius +s.radius;
    return Circle(newr);
}

const Circle & Circle::operator =(const Circle& s) {
    if(this == &s)return *this;
    radius = s.radius;
    return *this;
}

ostream & operator<<(ostream &out, Circle &s){
    out << s.radius;
    return out;
}

istream & operator >> (istream &in, Circle &s){
    in >> s.radius;
    return in;
}

