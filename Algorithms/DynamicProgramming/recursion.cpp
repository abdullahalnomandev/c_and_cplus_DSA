#include <bits/stdc++.h>
using namespace std;


int rec(int n){
    if(n == 1) return 1;
    return n*rec(n - 1);
}

int main(){

    cout << "factorial : " << rec(5);

    return 0;
}