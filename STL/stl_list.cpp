#include <bits/stdc++.h>
using namespace std;


int main() {
    // list <int> ages =  {1,2,3,4,5};
    // int a[] = {10,20,30};
    vector<int> v = {10,20,30};
    list<int> l(v.begin(), v.end());

    cout << *l.begin() << endl;

    // for(auto it = l.begin(); it != l.end(); it++)   cout << *it << " ";
    l.resize(5);
    for(int val : l) cout << val << " ";
    return 0;
}
