#include <iostream>
using namespace std;

int main() {
   cout << "Size of char : " << sizeof(char) << endl; //1
   cout << "Size of int : " << sizeof(int) << endl; //4
   cout << "Size of short int : " << sizeof(short int) << endl; //2
   cout << "Size of long int : " << sizeof(long int) << endl; //4
   cout << "Size of float : " << sizeof(float) << endl; //4
   cout << "Size of double : " << sizeof(double) << endl; //8
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl; //2

   return 0;
}
