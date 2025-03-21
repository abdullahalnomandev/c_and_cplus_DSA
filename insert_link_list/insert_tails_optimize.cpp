
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head != NULL)
    {
        tail->next = newNode;
        tail = newNode;
    }
    else{
        head = newNode;
        tail = newNode;
    }
        
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 2020);
    insert_at_tail(head, tail, 2021);
    insert_at_tail(head, tail, 2022);

    print_linked_list(head);

    return 0;
}
