#include <iostream>
using namespace std;
class A {
private:
    int a;
public:
    A() { a=0; }
    friend class B;     // Class A has given friendship to Class B
};

class B {
private:
    int b;
public:
    // x is reference to object of A
    void showA(A& x) {
        cout << x.a;
    }
};

int main() {
   A a;
   B b;
   //If you are passing the object, you need reference to catch it
   b.showA(a);
   return 0;
}
