#include <bits/stdc++.h>
using namespace std;

// Function to check if binary string is divisible by 3
bool isDivisibleBy3(string binary) {
    int num = 0;
    for(char c : binary) {
        num = (num * 2 + (c - '0')) % 3;
    }
    return num == 0;
}

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string binary;
        cin >> binary;
        
        if(isDivisibleBy3(binary)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}