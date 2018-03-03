// stack::push/pop
#include <iostream>       // std::cout
#include <stack>          // std::stack

using namespace std;
int main ()
{
  stack<int> mystack;

  for (int i=0; i<5; ++i) mystack.push(i);

  cout << "Popping out elements...";
  while (!mystack.empty())
  {
     cout << ' ' << mystack.top(); // You will print top element here but you need to POP it to get the next element
     mystack.pop();
  }
  cout << '\n';

  return 0;
}
