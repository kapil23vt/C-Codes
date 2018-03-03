#include <iostream>
using namespace std;

class Test
{
    static int x;
public:
    Test() { x++; }
    static int getX() {return x;}
};

int Test::x = 0;

int main()
{
    cout << Test::getX() << endl;
    // Constructor will be called after the creation of the object

    Test t0; // Now the value of the static int x will be incremented
    cout << Test::getX() << endl;

    Test t1;
    cout << Test::getX() << endl;
}
