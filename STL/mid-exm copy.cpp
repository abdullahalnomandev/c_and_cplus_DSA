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
    for (int i = 0; i < idx - 1; i++)temp = temp->next;

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

int count (Node* head){
    int count = 0;
    Node *temp = head;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q ;
    // int V;
    // int val;

    cin >> Q;

    for(int i = 0; i < Q; i++){

        int X, V;
        cin >> X >> V;
        // insert_at_tail(head, tail,V );
        if( X > count(head)){
            cout << "Invalid" << endl;
        }else{
            // insert_at_any_position(head, X , V);
             cout << "Done" << endl;
        }
    }

    // while (true)
    // {
    //     cin >> val;
    //     if (val == -1)
    //         break;
    //     insert_at_tail(head, tail, val);
    // }

    // insert_at_tail(head, tail, 4000);
    // delete_at_any_position( head,2 );
    // delete_from_tail(head, tail);
    // print_backward(tail);
    // print_foward(head);
    // reverse_dubly(head, tail);
    print_foward(head);

    return 0;
}