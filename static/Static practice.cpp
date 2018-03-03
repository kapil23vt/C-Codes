#include <iostream>
using namespace std;

class Test
{
    static int x;
public:
    Test()
    {
        cout << "Constructor is called" << endl;
        x++;
    }
    static int getX() {
        cout << "Get statement is called" << endl;
        return x;}
};

int Test::x = 5;

int main()
{
    Test object1;
    cout << Test::getX() << endl;

    //Two objects are created now
    //Constructor will be called twice
    Test object2[2];
    cout << Test::getX();
}
