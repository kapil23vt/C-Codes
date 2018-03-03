#include <iostream>
using namespace std;

class Square;

class Rectangle {
    int width, height;
  public:
    int area ()
      {return (width * height);}
    void convert (Square a);
};

class Square {
  friend class Rectangle;
  // Squares gives away its friendship
  // So now Rectangle can access variable inside Square
  // access implies read and write
  private:
    int side;
  public:
    Square (int a) : side(a) {}
};

void Rectangle::convert (Square a) {
    // Private variables width and height are set by friend function Rectangle
  width = a.side;
  height = a.side;
}

int main () {
  Rectangle rect; //rect created
  Square sqr (4); //sqr with side = 4 created
  rect.convert(sqr); //we want to convert our rect object to sqr object
  cout << rect.area(); // checking with area
  return 0;
}
