#include <iostream>
using namespace std;

class Point {
  int x, y;
public:
  Point() {} // needed to construct temporaries
  Point(int px, int py) {
    x = px;
    y = py;
  }

  void show() {
    cout << x << " ";
    cout << y << "\n";
  }

  friend Point operator+(Point op1, Point op2); // now a friend
  Point operator-(Point op2);
  Point operator=(Point op2);
  Point operator++();
};

// Now, + is overloaded using friend function.
Point operator+(Point op1, Point op2)
{
  Point temp;

  temp.x = op1.x + op2.x;
  temp.y = op1.y + op2.y;

  return temp;
}

// Overload - for Point.
Point Point::operator-(Point op2)
{
  Point temp;

  // notice order of operands
  temp.x = x - op2.x;
  temp.y = y - op2.y;

  return temp;
}

// Overload assignment for Point.
Point Point::operator=(Point op2)
{
  x = op2.x;
  y = op2.y;

  return *this; // i.e., return object that generated call
}

// Overload ++ for Point.
Point Point::operator++()
{
  x++;
  y++;

  return *this;
}

int main()
{
  Point ob1(10, 20), ob2( 5, 30);

  ob1 = ob1 + ob2;
  ob1.show();

  return 0;
}
