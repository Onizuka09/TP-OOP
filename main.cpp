#include <iostream>
#include "Point_3.h"
#include "Point_2.h"
#include "Point.h"
using namespace std;

int main() {

cout << "---- Test Class Point 1 ---\n";
    Point p1(5,6);
    p1.afficher();
    cout << "---- TEST Class Point 2 ---\n";
    Point2 p2(10,9);
    p2.deplacer(5, 2);

cout << "---- TEST Class Point 3 ---\n";
    Point3 po; // defaut constructor
    Point3 a('a', 0, 5);
     a.translate(10);
    a.afficher();
   
    cout << a.middle() << endl;
    Point3 s = a.symetrie();
    s.afficher();

    return 0; // Added return statement
}
