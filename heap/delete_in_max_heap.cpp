#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int current_index = v.size() - 1;
    while (current_index != 0)
    {
        int parent_index = (current_index - 1) / 2;
        if (v[parent_index] < v[current_index])
            swap(v[current_index], v[parent_index]);
        else
            break;
        current_index = parent_index;
    }
}

void print_head(vector<int> v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void delete_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();

    int cur_idx = 0;
    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;

        int left_val = INT_MIN, right_val = INT_MIN;

        if (left_idx < v.size())
            left_val = v[left_idx];
        if (right_idx < v.size())
            right_val = v[right_idx];

        if (left_val > right_val && left_val < v[left_idx])
        {
            swap(v[cur_idx], v[left_idx]);
            cur_idx = left_idx;
        }
        else if (right_val > left_val && right_val < v[cur_idx])
        {
            swap(v[cur_idx], v[right_idx]);
            cur_idx = right_idx;
        }
        else
            break;
    }

    int left_idx = cur_idx * 2 + 1;
    int right_idx = cur_idx * 2 + 2;

    int left_val = INT_MIN, right_val = INT_MIN;

    if (left_idx < v.size())
        left_val = v[left_idx];
    if (right_idx < v.size())
        right_val = v[right_idx];

    if (left_val > right_val && left_val < v[left_idx]) 
    {
        swap(v[cur_idx], v[left_idx]);
        cur_idx = left_idx;
    }
    else if (right_val > left_val && right_val < v[cur_idx])
    {
        swap(v[cur_idx], v[right_idx]);
        cur_idx = right_idx;
    }
    else{
        break;
    }
}
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    delete_heap(v);

    return 0;
}