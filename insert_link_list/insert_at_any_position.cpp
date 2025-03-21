
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
void insert_at_ay_position(Node *&head, int idx, int val)
{

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < idx -1 ; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
} 


int main()
{

    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    insert_at_ay_position(head, 2, 100);  
    insert_at_ay_position(head, 2, 200);  
    print_linked_list(head);

    return 0;
}
