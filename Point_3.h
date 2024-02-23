#ifndef  __POINT_3_H__
#define  __POINT_3_H__

// #i
class Point3
{
private:
    double x = 0, y = 0;
    char name;

public:
    Point3(char,double, double);
    Point3();
    ~Point3();
    void afficher();
    void translate(double);
    double middle();
    Point3 symetrie();
    double distance(Point3 p);
    bool  comparer(Point3 p);
};

#endif