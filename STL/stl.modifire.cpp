#include <bits/stdc++.h>
using namespace std;


int main() {
    
    list<int> l={10,20,30,40,50,60,80,100};
    list<int> l2;
    
    l2 = l;


//    cout << *next(l2.begin(),2);
    // l2.insert(next(l2.begin(),2),100);
    // l2.erase(next(l2.begin(),3));
    // l2.erase(next(l2.begin(),2),next(l2.begin(),5));
    // replace(l2.begin(),l2.end(),20,1000);

    auto it = find(l2.begin(),l2.end(),20);
    if(it == l2.end()){
        cout << "Not found!" << endl;
    }else{
        cout << "FOUND!" << endl;
    }

   for(int val : l2) cout << val << " ";
    return 0;
}
