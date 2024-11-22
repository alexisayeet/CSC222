#include <iostream>
#include "point.h"
using namespace std;
#include <string>

Point::Point(){
    x=0;
    y=0;
}
Point::Point(int xin){
    x=xin;
}
Point::Point(int xin, int yin){
    x=xin;
    y=yin;
}
Point Point::operator+(const Point& second){
    Point result(x+second.x,y+second.y);
    return result;
}