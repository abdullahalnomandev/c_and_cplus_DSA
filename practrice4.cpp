
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

int size_of_linked_list(Node *head)
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
void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_ay_position(Node *&head, int idx, int val)
{

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head != NULL)
    {
        tail->next = newNode;
        tail = newNode;
    }
    else
    {
        head = newNode;
        tail = newNode;
    }
}
void insert_at_head(Node *&head, int val)
{

    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true){
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    int idx;
    while (cin >> idx >> val){
        int size = size_of_linked_list(head);
        if (idx > size)
        {
            cout << "Invalid\n";
            continue;
        }
        else if (idx == 0)
        {
            insert_at_head(head, val);
        }
        else if (idx == size)
        {
            insert_at_tail(head, tail, val);
        }
        else
        {
            insert_at_ay_position(head, idx, val);
        }
        print_linked_list(head);
    }

    return 0;
}
