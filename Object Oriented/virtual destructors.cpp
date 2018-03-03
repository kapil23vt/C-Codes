#include<iostream>

using namespace std;
class Base1 {
 public:
     Base1()
     { cout << "B1 C" << endl;  }
     ~ Base1()
     { cout << "B1 D" << endl;  }
};

class Derived: public Base1 {
   public:
     Derived()
     {  cout << "D C" << endl;  }
     ~ Derived()
     {  cout << "D D" << endl;  }
};

int main()
{
    Base1 *d = new Derived;
    delete d;
   return 0;
}
