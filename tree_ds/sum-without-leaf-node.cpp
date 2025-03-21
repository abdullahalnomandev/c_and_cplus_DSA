#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree(){

    int val;
    cin >> val;
    Node *root;
    if(val == -1) root = NULL;
        else root = new Node(val);
    queue<Node *> q;
    if(root)
        q.push(root);

    while (!q.empty())
    {
        // 1. Firs step
        Node *p = q.front();
        q.pop();

        // 2. Second step
        int l, r;
        cin >> l >> r;

        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        // 3. third step
        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}

int print_outer_nodes(Node *root){
    if (root == NULL) return;
    
    vector<int> result;
    
    print_outer_nodes(root);
    
    if (root->left != NULL || root->right != NULL) {
        result.push_back(root->val);
    }
    
    print_outer_nodes(root->right);
    
    for (int val : result) {
        cout << val << " ";
    }
}


int main()
{
    Node *root = input_tree();

    cout << print_outer_nodes(root) << endl;
    return 0;
}