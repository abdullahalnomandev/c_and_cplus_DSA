#include <bits/stdc++.h>
using namespace std;


int main() {
 
 list<int> l = {20,30,40,30,60};

    // l.remove(20);
    // l.sort();
    // l.sort(greater<int>());
    // l.reverse();
    cout << l.back() << endl;
    cout << l.front() << endl;
    cout << *next(l.begin(),2) << endl;

   for(int val : l) cout << val << " " ;
    return 0;
}
