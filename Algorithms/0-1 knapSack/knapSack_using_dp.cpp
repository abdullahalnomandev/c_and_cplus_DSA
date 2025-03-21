#include <bits/stdc++.h>
using namespace std;

int value[1005], weight[1005];
int dp[1005][1005];
int knapsack(int index, int max_weight)
{

    if (index < 0 || max_weight <= 0)
        return 0;

    if (dp[index][max_weight] != -1)
        return dp[index][max_weight];

    if (weight[index] <= max_weight)
    {
        // options
        // 1. beg a rakhbo, 2. beg e rakbo na
        int op1 = knapsack(index - 1, max_weight - weight[index]) + value[index];
        int op2 = knapsack(index - 1, max_weight);
        dp[index][max_weight] = max(op1, op2);
        return dp[index][max_weight];
    }
    else
    {
        // option
        // beg e rakbo na
        dp[index][max_weight] = knapsack(index - 1, max_weight);
        return dp[index][max_weight];
    }
}
int main()
{

    int n, max_weight;
    cin >> n;

    // takeing values
    for (int i = 0; i < n; i++)
        cin >> value[i];

    // takeing weights
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    // take maximum weight
    cin >> max_weight;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i <= max_weight; j++)
        {
            dp[i][j] = -1;
        }
    }

    // knapsack problem
    knapsack(n - 1, max_weight);

    cout << knapsack(n - 1, max_weight) << endl;
    return 0;
}