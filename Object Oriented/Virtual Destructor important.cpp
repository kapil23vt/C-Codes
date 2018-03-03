#include<iostream>

using namespace std;
class Base1 {
 public:
     Base1()
     { cout << "B1 C" << endl;  }
    virtual~ Base1()
     { cout << "B1 D" << endl;  }
};

class Base2 {
 public:
     Base2()
     { cout << "B2 C" << endl;  }
      ~ Base2()
     { cout << "B2 D" << endl;  }
};

class Derived: public Base1, public Base2 {
   public:
     Derived()
     {  cout << "D C" << endl;  }
     ~ Derived()
     {  cout << "D D" << endl;  }
};

int main()
{
   Base1 *b2 = new Derived;
   delete b2;
   // At runtime, b1 will be object of Derived class
   // Constructor part will be same as creating object of Derived class
   // If you dont use virtual destructor, destructor of derived class wont get called, try it!!!

   //Derived *d = new Derived;
   // Parents constructor first
   // Base ka destructor first

   //delete d;
   return 0;
}
