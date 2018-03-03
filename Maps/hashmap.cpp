#include <map>
#include <iostream>
#include <cassert>
#include <stdio.h>
#include <string.h>

using namespace std;
int main(int argc, char **argv)
{
  map<string, int> m;
  m["hello"] = 1;
  m["world"] = 2;

  // check if key is present
  if (m.find("world") != m.end())
    cout << "map contains key world!\n";

  map<string, int>::iterator i = m.find("world");

  cout << "Key: " << i->first << " Value: " << i->second << '\n';

  return 0;
}
