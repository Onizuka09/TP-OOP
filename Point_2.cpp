#include "Point_2.h"

Point2::Point2(float _x,float _y)
{
    this->x=_x;
    this->y = _y;
}
Point2::~Point2(){

}

void Point2::deplacer(float dx,float dy)
{
    x+=dx;
    y += dy;

}
    float Point2::get_x(){
        return this->x; 
    }
float Point2::get_y(){
    return this->y;
}
