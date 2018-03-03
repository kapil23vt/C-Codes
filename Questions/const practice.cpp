#include <stdio.h>
#include <iostream>
#include <math.h>


static void foo(int anyvariable);

using namespace std;

int main(void)
{
    const int a = 5;
    foo(a);
    cout << a;

    return 0;
}

static void foo(const int inputvar)
{
    // inputvar = const int
    // x = pointer to const int

    const int *x = &inputvar;
    *x = 10;
}
