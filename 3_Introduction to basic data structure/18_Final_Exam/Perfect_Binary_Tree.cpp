#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;

    if(val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

int max_heigth(Node* root)
{
    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = max_heigth(root->left);
    int r = max_heigth(root->right);

    return max(l, r) + 1;
}

int total_node(Node* root)
{
    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = total_node(root->left);
    int r = total_node(root->right);

    return l + r + 1;
}

int main()
{
    Node* root = input_tree();
    int nodes =  total_node(root);

    int h = max_heigth(root);
    int ans = pow(2, h) - 1;
    
    if(nodes == ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}