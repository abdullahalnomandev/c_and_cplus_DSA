#include <bits/stdc++.h>
using namespace std;

int main(){
  
  set<int> s;
  int n;


   while(n--){
     int val;
     cin >> val;
     s.insert(val);
   }
    
    for(auto it = s.begin(); it != s.end();it++){
        cout << *it << " ";
    }
    if(s.count(4))
     cout << "Found 4" << endl;
    else
     cout << "Not Found 4" << endl;
    return 0;
}