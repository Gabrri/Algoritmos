
#include <iostream>
using namespace std;

class Point{
private:
  int x;
  int y;

public:
  // declaracion de los operadores
  Point();
  Point(int x0, int y0);

  void setx(int x0);
  void sety(int y0);
  int getx();
  int gety();

  Point operator++(int){
    x= x+1;
    y= y+1;
    return *this; // ?
  }

};

// constructor inicializa todo en 0
Point::Point(){
  x = 0;
  y = 0;
}

Point::Point(int xc, int yc) {
  x = xc;
  y = yc;
}

int Point::getx() const {
  return x;
}
int Point::gety() const {
  return y;
}
void Point::setx(int v) {
  x = v;
}
void Point::sety(int v) {
  y = v;
}

bool operator==(Point a, Point b){
  bool first = a.getx() == b.getx();
  bool second = a.gety() == b.gety();
}

Point & Point::operator=(const Point &pt) {
  x = pt.getx();
  y = pt.gety();
  return *this;
}

ostream & operator<<(ostream & os, const Point &pt) {
  return os << "(" << pt.getx() << "," << pt.gety() << ")";
}

Point operator+(const Point &p1, const Point &p2) {
  Point res;
  res.setx(p1.getx()+ p2.getx());
  res.sety(p1.gety()+ p2.gety());
  return res;
}

int operator*(const Point &p1, const Point &p2){
  return (p1.getx() * p2.getx()) + (p1.gety() * p2.gety());
}

int main(){
  cout << boolalpha;
  Point p(4,6), q( -4, -6);

  cout << ( p == q ) << endl;

  return 0;
}
