#include<iostream>
#include<conio.h>
using namespace std;

int main() {
int a[5]={7,8,9,1,2};
int i=0;

// Comparing a[0] and a[1]
// Comparing a[1] and a[2]
// Comparing a[4] and a[0]

while(a[i]<a[(i+1)%10])
i++;

cout << a[(i+1)%10] << endl;
cout << a[(i+2)%10] << endl;

getch();
return 0;
}
