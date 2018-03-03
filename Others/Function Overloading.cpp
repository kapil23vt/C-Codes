#include <iostream>
using namespace std;

class addData {
   public:
       void add(int i, int j) {
           int temp = i+j;
           cout << "Addition = " << temp << endl;
        }
        void add(int i, int j, int k) {
           int temp = i+j+k;
           cout << "Addition = " << temp << endl;
        }
       void add(double i, double j) {
           double temp = i+j;
           cout << "Addition = " << temp << endl;
    }
};

int main(void) {
   addData x;
   x.add(10,12);
   x.add(10.5,12.6);
   x.add(10,12, 14);

   return 0;
}
