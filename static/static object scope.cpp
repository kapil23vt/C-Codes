#include<iostream>
using namespace std;

class GfG
{
    public:
    GfG()
    {
        cout << "Constructor\n";
    }

    ~GfG()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    int x = 0;
    if (x==0)
    {
        //GfG obj; //Destructor will be called before main
        static GfG obj; //Destructor will be called after main
    }
    cout << "End of main\n";
}
