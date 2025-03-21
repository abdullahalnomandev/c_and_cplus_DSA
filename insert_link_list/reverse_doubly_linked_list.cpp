#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next;
    Node *previous;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
    }
};

void print_foward(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->previous;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }
}
void insert_at_any_position(Node *&head, int idx, int val)
{

    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
        temp = temp->next;

    newNode->previous = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->previous = newNode;
}

void delete_from_head(Node *&head, Node *&tail)
{

    Node *deleteNode = head;
    head = deleteNode->next;
    head->previous = NULL;
    delete deleteNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    };
}

void delete_from_tail(Node *&head, Node *&tail)
{

    Node *deleteNode = tail;
    tail = deleteNode->previous;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    };
    tail->next = NULL;
}

void delete_at_any_position(Node *head, int idx)
{
    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
        temp = temp->next;

    Node *deletNode = temp->next;
    temp->next = deletNode->next;
    deletNode->next->previous = temp;

    delete deletNode;
}

void reverse_dubly(Node *head, Node *tail)
{

    for (Node *i = head, *j = tail; i != j && i->previous != j; i = i->next, j = j->previous)
    {
        swap(i->val, j->val);
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *tail = new Node(30);

    // head->next = a;
    // a->previous = head;

    // a->next = tail;
    // tail->previous = a;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    // insert_at_tail(head, tail, 4000);
    // delete_at_any_position( head,2 );
    // delete_from_tail(head, tail);
    // print_backward(tail);
    print_foward(head);
    reverse_dubly(head, tail);
    print_foward(head);

    return 0;
}