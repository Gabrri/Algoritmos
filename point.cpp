#include "point.hpp"


Point::Point(){
  x = 0;
  y = 0;
}

Point::Point(int xc, int yc) {
  x = xc;
  y = yc;
}

int Point::getX() const {
  return x;
}
int Point::getY() const {
  return y;
}
void Point::setX(int v) {
  x = v;
}
void Point::setY(int v) {
  y = v;
}

Point & Point::operator=(const Point &pt) {
  x = pt.getX();
  y = pt.getY();
  return *this;
}


ostream & operator<<(ostream & os, const Point &pt) {
  return os << "(" << pt.getX() << "," << pt.getY() << ")";
}

Point operator+(const Point &p1, const Point &p2) {
  Point res;
  res.setX(p1.getX()+ p2.getX());
  res.setY(p1.getY()+ p2.getY());
  return res;
}

int operator*(const Point &p1, const Point &p2){
  return (p1.getX() * p2.getX()) + (p1.getY() * p2.getY());
}
