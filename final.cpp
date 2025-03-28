#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(const Student l, const Student r) {
        if (l.marks != r.marks) {
            return l.marks < r.marks;  
        }
        return l.roll > r.roll;  
    }
};

int main() {
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;
        
        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;
    while (q--) {
        int op;
        cin >> op;

        if (op == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            pq.push(Student(name, roll, marks));


            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } else if (op == 1) {
            if (pq.empty()) {
                cout << "Empty" << endl;


            } else {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        } else if (op == 2) {
            if (pq.empty()) {
                
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.empty()) {

                    cout << "Empty" << endl;
                } else {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}