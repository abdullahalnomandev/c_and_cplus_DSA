#include <bits/stdc++.h>
using namespace std;


void fun(int* &p){

    int y = 200;
    p = &y;

    // cout << " IN FUN" << *p << endl;
}


int main() {

    int x = 10;
    int* p = &x;

    fun(p);

    // cout << "Out of FUN" << *p << endl;
    cout << *p << endl;
    return 0;
}
