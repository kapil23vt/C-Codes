#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> a;
    vector <int> :: iterator i; // Iterator is pointer
    // must start from a.begin()
    vector <int> :: reverse_iterator r;
    // must start from a.rbegin()

    for (int i = 0; i < 5; i = i+1)
        a.push_back(i);

    cout << "Start to end\n";

    for (i = a.begin(); i != a.end(); ++i)
        cout << *i;


    cout << "\nEnd to start\n";
    for (r = a.rbegin(); r != a.rend(); ++r)
        cout << *r;

    cout << "\nCapacity of vector = " << a.capacity() << endl;
    cout << "\nNumber of elements in vector = " << a.size() << endl;

    cout << "Adding -4 and 10 to this vector" << endl;
    a.push_back(-4);
    a.push_back(10);

    sort(a.begin(), a.end());
    //sort(a.end(), a.begin()); = you cannot reverse sort

    cout << "\nSorted array is " << endl;
    for (i = a.begin(); i != a.end(); ++i)
        cout << *i << " ";



    return 0;

}
