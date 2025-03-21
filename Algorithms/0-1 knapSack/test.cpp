#include <bits/stdc++.h>
using namespace std;

int main() {


    int T;
    cin >> T;



    while (T--) {

        
        string S1, S2;
        
        cin >> S1 >> S2;

        if (S1.length() != S2.length()) {
            cout << "NO" << endl;
            continue;
        }

        int frq1[26] = {0};

        int frq2[26] = {0};

        for (char c : S1) {
            frq1[c - 'a']++;
        }
        for (char c : S2) {
            frq2[c - 'a']++;
        }

        bool isPile = true;
        for (int i = 0; i < 26; i++) {
            if (frq1[i] != frq2[i]) {
                isPile = false;
                break;
            }
        }

        if (isPile) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
