#include <iostream>
using namespace std;

class Mother {
  public:
    Mother ()
      { cout << "Mother Constructor" << endl; }
    Mother (int b)
      {
          cout << "Mother constructor overloaded" << endl;
          cout << "mother says b is " << b << endl;
      }
};

class Daughter : public Mother {
  public:
    Daughter (int a)
      { cout << "Daughter C says a is " << a << endl; }
};

class Son : public Mother {
  public:
    Son (int a) : Mother (a) // You are setting variable in mother
      { cout << "S C int" << endl; }
};

int main () {
  cout << "Creating daughter object" << endl;
  Daughter kelly(0);

  cout << "\nCreating son object" << endl;
  Son bud(10);

  return 0;
}
