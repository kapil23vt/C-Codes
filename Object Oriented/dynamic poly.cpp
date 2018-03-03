#include <iostream>
using namespace std;

class Shape {
   protected:
      int width, height;

   public:
      Shape( int a = 0 , int b = 0){
         width = a;
         height = b;
      }
      virtual int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a, int b):Shape(a, b) { }

      int area () {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a, int b):Shape(a, b) { }

      int area () {
         cout << "Triangle class area :" <<endl;
         return (width * height / 2);
      }
};

// Main function for the program
int main() {
   Shape *shape;
   Rectangle rec(6,5);
   Triangle  tri(6,5);

   // store the address of Rectangle
   // now shape object is of type Rectangle
   // using Polymorphism, appropriate function is called
   shape = &rec;

   // call rectangle area.
   cout << shape->area() << endl;

   // store the address of Triangle
   shape = &tri;

   // call triangle area.
   cout << shape->area() << endl;

   return 0;
}
