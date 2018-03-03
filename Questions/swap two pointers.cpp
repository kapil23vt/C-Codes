#include<stdio.h>
#include <iostream>
using namespace std;

void swap(int *address1, int *address2)
{
    int temp;
    temp = *address1;
    *address1 = *address2;
    *address2 = temp;
    return;
}

int main()
{
    int p = 1;
    int q = 2;
    cout << "p = " << p << "q= " << q << endl;
    cout << "Value at pointer p is " << *(&p) << endl;
    cout << "Value at pointer q is " << *(&q) << endl;

    swap(&p, &q);
    cout << "p = " << p << "q= " << q << endl;
    cout << "Value at pointer p is " << *(&p) << endl;
    cout << "Value at pointer q is " << *(&q) << endl;
    return 0;
}
