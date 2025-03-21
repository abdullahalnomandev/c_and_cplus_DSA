#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};


int main() {
    Node* head = new Node(10);
    Node* a = new Node(10);
    Node* b = new Node(10);
    Node* c = new Node(10);
    Node* d = new Node(10);
    return 0;
}