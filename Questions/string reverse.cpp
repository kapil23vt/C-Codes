#include<iostream>

using namespace std;

string reversestring(string s){
    int start = 0;
    int last = s.length() -1 ;
    char temp;

    while(start < last)
    {
        temp = s[start];
        s[start] = s[last];
        s[last] = temp;
        start++;
        last--;
    }
    return s;
}

int main()

{
    string s = "12345";
    s = reversestring(s);
    cout << s << endl;
}
