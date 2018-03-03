#include<iostream>
using namespace std;

class Shape
{
   public:

    static void printMsg()
    {
        cout<<"Welcome to Shape!";
    }
};

int main()
{
    // Do not need object of class to invoke function
    Shape::printMsg();
}
