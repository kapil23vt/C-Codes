#include<bits/stdc++.h>
using namespace std;

bool checkBalance(char expr[])
{
    stack<char> s;
    char a, b, c; // for each of [ ( {

    // Traversing the Expression {[]}
    // add right facing on the stack
    // pop stack for left facing

    for (int i=0; i<strlen(expr); i++)
    {
        // Push left side paranthesis on stack
        // stack has {[
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {
            // Push the element in the stack
            s.push(expr[i]);
        }
        else
        {
            // For right side paranthesis, check if you have left side in stack
            // for first ],if we get other that [ on stack, that expression is not balanced
            switch (expr[i])
            {
            case ')':
                // check the very next element in case of left facing expressions
                // Store the top element in a
                a = s.top();
                // In order to access the next element, we need to do pop
                // So in the next iteration, we will get next element
                s.pop();
                if (a=='{'||a=='[')
                    cout<<"Not Balanced";
                break;
            case '}':

                // Store the top element in b
                b = s.top();
                s.pop();
                if (b=='('||b=='[')
                    cout<<"Not Balanced";
                break;
            case ']':

                // Store the top element in c
                c=s.top();
                s.pop();
                if (c=='('||c=='{')
                    cout<<"Not Balanced";
                break;
            }
        }
    }

    // Check Empty Stack
    // If the expression is balanced, stack will be empty!
    // Since you have popped all
    if (s.empty())
        return true;
    else
        return false;
}

int main()
{
    char expr[]="()";

    if(checkBalance(expr))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    return 0;
}
