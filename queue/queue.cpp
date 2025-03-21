#include <bits/stdc++.h>
using namespace std;


int main(){

    queue<string> names;

    int Q;
    cin >> Q;
    for(int i=0; i<Q; i++){
        string name;
        cin >> name;
        names.push(name);
    }

    while (!names.empty()) {
        cout << names.front() << endl;
        names.pop();
    }

    cout << names.size() << endl;
    

    return 0;
}