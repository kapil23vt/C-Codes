#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
      //These 2 codes are equivalent
      //Polygon (int a, int b) : width(a), height(b) {}

    Polygon (int first, int second){
    width = first;
    height = second;
    }
    virtual int area (void) =0;
    void printarea(){ cout << this->area() << '\n';}
};

class Rectangle: public Polygon {
  public:
    Rectangle(int a,int b) : Polygon(a,b) {}
    int area(){ return width*height;}
};

int main () {
  Polygon * ppoly1 = new Rectangle (4,5);
  //Pointer since dynamic memory allocation
  ppoly1->printarea();
  delete ppoly1;
  return 0;
}
