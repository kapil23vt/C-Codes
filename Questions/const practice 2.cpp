#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main(void)
{
     int const a = 5;


     int const *x = &a;
     *x = 10;


    cout << *x;

    return 0;
}


