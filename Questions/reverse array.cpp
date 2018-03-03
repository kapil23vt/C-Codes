#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{

    int a[] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }

    int start = 0;
    int last = sizeof(a)/sizeof(a[0])-1;
    int temp;
    while(start < last)
    {
        temp = a[start];
        a[start] = a[last];
        a[last] = temp;
        start++;
        last--;
    }

    for (int i = 0; i < 5; i++)
    {

        cout << endl << a[i];
    }
    return 0;
}
