#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack newStack;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int X;
        cin >> X;
        newStack.push(X);
    }

    while (!newStack.empty())
    {
        
        cout << newStack.top() << " ";
        newStack.pop();
    }
    
  

    return 0;
}