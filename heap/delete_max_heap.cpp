void delete_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();

    int cur_idx = 0;
    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;
        int largest = cur_idx;

        if (left_idx < v.size() && v[left_idx] > v[largest])
            largest = left_idx;
        
        if (right_idx < v.size() && v[right_idx] > v[largest])
            largest = right_idx;

        if (largest == cur_idx)
            break;

        swap(v[cur_idx], v[largest]);
        cur_idx = largest;
    }
} 