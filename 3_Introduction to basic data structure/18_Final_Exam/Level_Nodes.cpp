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

Node* tree_input()
{
    int val;
    cin >> val;

    Node *root = new Node(val);
    queue<Node* > q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void lavel_nodes(Node* root, int lav)
{
    if(root == NULL) return;

    queue<pair<Node*, int>> q;
    q.push({root, 0});

    bool flag = false;

    while (!q.empty())
    {
        pair<Node*, int> parent = q.front();
        q.pop();

        Node* node = parent.first;
        int lavel = parent.second;

        if(lav == lavel)
        {
            cout << node->val << " ";
        }

        if(node->left) q.push({node->left, lavel + 1});
        if(node->right) q.push({node->right, lavel + 1});
    }
    // cout << "Invalid" << endl; 
}

int node_heigth(Node* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;

    int l = node_heigth(root->left);
    int r = node_heigth(root->right);

    return max(l,r)+1;
}

int main()
{
    Node* root = tree_input();

    int lavel;
    cin >> lavel;
    if(node_heigth(root) < lavel)
        cout << "Invalid" << endl;
    else
        lavel_nodes(root, lavel);

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* tree_input()
// {
//     int val;
//     cin >> val;

//     Node* root = new Node(val);
//     queue<Node*> q;
//     if(root)q.push(root);

//     while (!q.empty())
//     {
//         Node* p = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//         if (l != -1)
//         {
//             p->left = new Node(l);
//             q.push(p->left);
//         }
//         else p->left = NULL;

//         if (r != -1)
//         {
//             p->right = new Node(r);
//             q.push(p->right);
//         }
//         else p->right = NULL;
//     }
//     return root;
// }

// void print_level(Node* root, int target, int curr = 0)
// {
//     if (root == NULL) return;

//     if (curr == target)
//     {
//         cout << root->val << " ";
//         return;
//     }

//     print_level(root->left, target, curr + 1);
//     print_level(root->right, target, curr + 1);
// }

// int height(Node* root)
// {
//     if (root == NULL) return -1;
//     return 1 + max(height(root->left), height(root->right));
// }

// int main()
// {
//     Node* root = tree_input();

//     int level;
//     cin >> level;

//     if (height(root) < level)
//         cout << "Invalid" << endl;
//     else
//         print_level(root, level);

//     return 0;
// }
