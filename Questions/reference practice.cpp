#include<iostream>
using namespace std;

void foo_ref(int &temp)
{
    // temp is reference to x
    // so when you change the reference, you change the value
    temp = 6;
}

void foo_passbyvalue(int temp)
{
    // temp is variable on stack with value = value passed
    temp = 7;
}

int main()
{
    int x = 5;

    foo_passbyvalue(x);
    cout << "x = " << x << '\n';

    cout << "x = " << x << '\n';
    foo_ref(x);
    //At this point, value of x is changed!
    cout << "x = " << x << '\n';

    foo_passbyvalue(x);
    cout << "x = " << x << '\n';

    return 0;
}
