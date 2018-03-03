#include <iostream>
using namespace std;

int main() {
    int i = 101;
    int &j = i;

    //Since j references to i, j and i are same things
    j = 855;


    cout << i<< endl;
    return 0;
}
