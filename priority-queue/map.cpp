
#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string,int> mp;

    mp["airen"] = 2;
    mp["esha"] = 1000;
    mp["noman"] = 50;

    // for(auto it = mp.begin(); it != mp.end(); it++){
    //     cout << it->first << " : " << it->second << endl;
    // }

     if(mp.count("esha")){
        cout << "esha" << endl;
     } else
       cout << "Not found" << endl;
    return 0;
}