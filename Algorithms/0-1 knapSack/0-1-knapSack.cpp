#include <bits/stdc++.h>
using namespace std;

int value[1005], weight[1005];

int knapsack(int index, int max_weight)
{

    if( index < 0 || max_weight <= 0)
        return 0;
    

    if (weight[index] <= max_weight)
    {
        // options
        // 1. beg a rakhbo, 2. beg e rakbo na
        int op1 = knapsack(index - 1, max_weight - weight[index]) + value[index];
        int op2 = knapsack(index - 1, max_weight);
        return max(op1, op2);
    }
    else
    {
        // option
        // beg e rakbo na
        return knapsack(index - 1, max_weight);
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

    // knapsack problem
    knapsack(n - 1, max_weight);


    cout << knapsack(n - 1, max_weight) << endl;
    return 0;
}