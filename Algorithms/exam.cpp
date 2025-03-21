#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj_mt(n, vector<int>(n, INT_MAX));

    for (int i = 0; i < n; i++) {
        adj_mt[i][i] = 0; 
    }

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        if (c < adj_mt[a][b]) {
            adj_mt[a][b] = c;
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                if (adj_mt[i][k] != INT_MAX && adj_mt[k][j] != INT_MAX) {
                    adj_mt[i][j] = min(adj_mt[i][j], adj_mt[i][k] + adj_mt[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        
        if (adj_mt[x][y] == INT_MAX) {
            cout << -1 << endl; 
        } else {
            cout << adj_mt[x][y] << endl; 
        }
    }

    return 0;
}