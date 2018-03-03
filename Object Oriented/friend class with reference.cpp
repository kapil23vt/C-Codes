#include <iostream>

using namespace std;

class Box {
   double width;

   public:
      friend void printWidth( Box box ); // Now printWidth function can access any (private too) variables
      void setWidth( double wid );
};

void Box::setWidth( double wid ) {
   width = wid;
}

void printWidth( Box box ) {
   cout << "Width of box : " << box.width <<endl;
}

int main() {

   Box box;
   box.setWidth(10.0);
   // Use friend function to print the width.
   printWidth( box );

   return 0;
}
