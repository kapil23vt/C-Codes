#include <stdio.h>
#include <iostream>
#include <math.h>


void foo(int *inputvar);

using namespace std;

int main(void)
{
    int a = 5;
    foo(&a);
    cout << a;

    return 0;
}

void foo(int *inputvar)
{
    // Inputvar is pointer to int
    // Since address is of a, inputvar is pointer to a

    int *x;
    x = inputvar;

    // Since x is eqaul to inputvar, both point to a

    // Changing the value at x, so you are updating value at memory location
    *x = 10;
}
