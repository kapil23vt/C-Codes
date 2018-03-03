#include<iostream>
using namespace std;

class Base //Abstract class since virtual void fun() = 0;
{
   int x;
public:
    Base()
    {
        cout << "Base C" << endl;
    }
    virtual void fun() = 0;
    int getX() { return x; }
};

class Derived: public Base
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};

int main(void)
{
    // if you don't override fun()
    // derived class will also be abstract
    // now since you have overrrided fun()
    // derived class is not abstract
    // and you can instantiate it

    Derived d;
    // see, the constructor of base class will also be called

    d.fun();
    return 0;
}
