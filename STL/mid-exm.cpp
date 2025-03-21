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
    cout << "L -> ";
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

    cout << "R -> ";
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

int count(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    // int V;
    // int val;

    cin >> Q;

    for (int i = 0; i < Q; i++)
    {

        int X, V;
        cin >> X >> V;
        // insert_at_tail(head, tail,V );

        int limit = count(head);

        if (X == 0)
        {
            insert_at_head(head, tail, V);
            print_foward(head);
            print_backward(tail);
        }
        else if (X == limit)
        {
            insert_at_tail(head, tail, V);
            print_foward(head);
            print_backward(tail);
        }
        else if (X < limit)
        {
            insert_at_any_position(head, X, V);
            print_foward(head);
            print_backward(tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }



    return 0;
}