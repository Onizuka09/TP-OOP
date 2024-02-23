#ifndef  __POINT_2_H__
#define  __POINT_2_H__
#include<iostream>
using namespace std;
class Point2
{
private:
    float x = 0, y = 0;

public:
    Point2(float, float);
    ~Point2();
    void deplacer(float, float);
    // void set_x(float);
    float get_x(); 
float get_y();
    // float get_y();


};

#endif