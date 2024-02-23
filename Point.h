#ifndef  __POINT_H__
#define  __POINT_H__
#include<iostream>
using namespace std;
class Point
{
private:
    float x = 0, y = 0;

public:
    Point(float, float);
    ~Point();
    void afficher();
    void deplacer(float, float);
};

#endif