#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> numbers;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            numbers.push_front(V);
        }
        else if (X == 1)
        {
            numbers.push_back(V);
        }
        else if (X == 2)
        {
            if ((V >= 0) && (V < numbers.size())) {
                numbers.erase(next(numbers.begin(), V));
            }
        }
        cout << "L -> ";
        for (int number : numbers)
            cout << number << " ";
        cout << endl;

      
        numbers.reverse();
        cout << "R -> ";
        for (int number : numbers)
            cout << number << " ";
        cout << endl;
        numbers.reverse();
    }
    return 0;
}

