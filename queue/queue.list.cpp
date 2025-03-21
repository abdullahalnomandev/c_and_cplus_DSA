#include <bits/stdc++.h>
using namespace std;


class myQueue {
    public:
    list <int> l;

    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    int back(){
        return l.back();
    }

    int size () {
        return l.size();
    }

    bool empty() {
        return l.empty();
    }

};

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