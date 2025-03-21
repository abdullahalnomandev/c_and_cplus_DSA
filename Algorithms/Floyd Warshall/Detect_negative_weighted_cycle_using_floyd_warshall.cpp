#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;
    int adj_mt[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_mt[i][j] = 0;
            }
            else
            {

                adj_mt[i][j] = INT_MAX;
            }
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_mt[a][b] = c;
        // adj_mt[b][a] = c;
    }

    for (int k = 0; k < n; k++)
{

    for (int i = 0; i < n; i++){
        for (int j = 0; j < e; j){
             if(adj_mt[i][k] + adj_mt[k][j] < adj_mt[i][j]){
                adj_mt[i][j] = adj_mt[i][k] + adj_mt[k][j] ;
             } 
        }
    cout << endl;
    }
    }



    return 0;
}