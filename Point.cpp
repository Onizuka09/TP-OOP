#include "Point.h"
Point::Point(float _x,float _y)
{
    this->x=_x;
    this->y = _y;
}
Point::~Point(){

}

void Point::afficher(){
    cout << x << endl;
    cout << y << endl;
}
void Point::deplacer(float dx,float dy)
{
    x+=dx;
    y += dy;

}

