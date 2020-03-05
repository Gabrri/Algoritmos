#include <iostream>
using namespace std;

struct Point{
  int x = 8; // miembro
  int y = 4; // miembro
};

// class Point{
// public: // una clase es una estructura con una seccion publica que tambien tiene una privada
//   int x;
//   int y;
// };
int Point::getX() const {
  return x;
}
int getX (Point y) {
  return y;
}
void Point::setX(int v) {
  x = v;
}
void Point::setY(int v) {
  y = v;
}

int main (){
  Point p;
  // p.x = 4;
  // p.y = 7;
  cout << p.getX() << " " << p.getY() << endl; // imprimiendo los puntos

  return 0;
}
