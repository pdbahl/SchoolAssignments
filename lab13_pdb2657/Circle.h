/* 
 * File:   Circle.h
 * Author: Y. Daniel Liang
 */


#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Circle {
    friend istream & operator >> (istream &in,  Circle &s);
    friend ostream & operator << (ostream &out, Circle &s);
    
public:
    Circle();
    Circle(double);
    double getArea();
    double getRadius();
    void setRadius(double);
    bool operator==(const Circle&s);
    bool operator!=(const Circle&s);
    bool operator<(const Circle&s);
    bool operator<=(const Circle&s);
    bool operator>(const Circle&s);
    bool operator>=(const Circle&s);
   
    Circle  operator+(const Circle&s);
    
    const Circle & operator=(const Circle & p);
    
private:
    double radius;
};

#endif
