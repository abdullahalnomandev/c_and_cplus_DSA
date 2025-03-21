
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
void reverse_linked_list(Node* &head , Node* temp , Node* &tail){
    if(temp->next == NULL) {
        head = temp;
        return;
    }
    reverse_linked_list(head, temp->next,tail);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

void reverse_print_linked_list(Node* temp){

    if( temp == NULL) return; 
    reverse_print_linked_list(temp->next);
    cout << temp->val << " ";
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

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
    reverse_linked_list(head,head,tail);
    print_linked_list(head);

    return 0;
}
