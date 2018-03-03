#include <iostream>
using namespace std;

int main()
{
    int value = 7;
    int *ptr = &value;

    cout << "ptr = " << ptr << '\n';
    cout << "*ptr = " << *ptr << '\n';

	int *b;
    *b = (*ptr)++;


    cout << "b " << b << '\n';
    cout << "*b " << *b << '\n';
	cout << "*ptr " << *ptr << '\n';


    cout << "ptr " << ptr << '\n';
    cout << "ptr + 1 " << ptr+1 << '\n';
    cout << "ptr + 2 " << ptr+2 << '\n';
    cout << "ptr + 3 " << ptr+3 << '\n';
    cout << "ptr + 4 " << ++++++++ptr << '\n';

    return 0;
}
