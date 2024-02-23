#include "Point_3.h"

#include<iostream>
#include <math.h>
using namespace std;

Point3::Point3()
{
    this->name= 'O'; 
    this->x=0;
    this->y = 0;
}

Point3::Point3(char n, double _x,double _y)
{
    this->name= n; 
    this->x=_x;
    this->y = _y;
}
Point3::~Point3(){

}

void Point3::afficher(){
    cout << "-------------\n";
    cout << name << endl;
    cout << x << endl;
    cout << y << endl;
    cout << "-------------\n";
}
void Point3::translate(double d)
{
    x+=d;
    y += d;

}
double Point3::middle(){
    return (double)(x + y) / 2;

}
Point3 Point3::symetrie(){
    Point3 ps (this->name, -this->x, -this->y);
    return ps;
}
double Point3::distance(Point3 p){
    double dist;
    dist = sqrt(pow(p.x - this->x,2) + pow(p.y - this->y,2));
    return dist;
}
bool Point3::comparer(Point3 p)
{
    bool state = false ;
    if ( this->x != p.x || this->y != p.y   )
    {
        cout << "not identical \n";
        return false; 
    }     
    else {
    cout << "identical \n"; 
    return true; 
}

}