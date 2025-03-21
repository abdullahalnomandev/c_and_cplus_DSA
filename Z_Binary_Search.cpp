#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < q; i++)
    {

        int val;
        cin >> val;
        bool isFound = false;

        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == val){
                isFound = true;
                break;
            }
            else if (a[mid] > val) r = mid - 1;
            
            else  l = mid + 1;
        }
        if (isFound) cout << "found" << endl;
        
        else  cout << "not found" << endl;
        
    }
}