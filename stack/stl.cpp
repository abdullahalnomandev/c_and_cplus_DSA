#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string s;
        cin >> s;
        
        stack<char> st;
        bool valid = true;
        
        for (char c : s)
        {
            if (c == '0')
            {
                st.push(c);
            }
            else if (c == '1')
            {
                if (st.empty())
                
                {
                    valid = false;
                    break;
                }
                st.pop();
            }
        }
        
        cout << (valid && st.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}
