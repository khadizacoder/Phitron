// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* left;
//         Node* right;
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

//     Node *root = new Node(val);
//     queue<Node* > q;
//     if(root) q.push(root);

//     while(!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//         Node *myLeft, *myRight;
//         if(l == -1) myLeft = NULL;
//         else myLeft = new Node(l);

//         if(r == -1) myRight = NULL;
//         else myRight = new Node(r);

//         p->left = myLeft;
//         p->right = myRight;

//         if(p->left) q.push(p->left);
//         if(p->right) q.push(p->right);
//     }
//     return root;
// }

// void leftOuter(Node* root)
// {
//     // if(root == NULL) return;

//     if (root->left) {
//         leftOuter(root->left);
//     } else if (root->right) {
//         leftOuter(root->right);
//     }
//     cout<<root->val<<" ";
// }

// void rightOuter(Node* root)
// {
//     if(root == NULL) return;

//     cout<<root->val<<" ";
//     if (root->right) {
//         rightOuter(root->right);
//     } else if (root->left){
//         rightOuter(root->left);
//     }
// }

// int main()
// {
//     Node* root = tree_input();
//     if(root->left)
//         leftOuter(root->left);
//     if(root)
//         cout << root->val << " " ;
//     if(root->right)
//         rightOuter(root->right);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;
    Node(int v)
    {
        val = v;
        left = right = NULL;
    }
};

int main()
{
    vector<int> arr;
    int x;
    while (cin >> x)
    {
        arr.push_back(x);
    }

    if (arr.empty() || arr[0] == -1)
    {
        return 0;
    }

    Node *root = new Node(arr[0]);
    queue<Node *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < (int)arr.size())
    {
        Node *cur = q.front();
        q.pop();

        if (i < (int)arr.size() && arr[i] != -1)
        {
            cur->left = new Node(arr[i]);
            q.push(cur->left);
        }
        i++;

        if (i < (int)arr.size() && arr[i] != -1)
        {
            cur->right = new Node(arr[i]);
            q.push(cur->right);
        }
        i++;
    }

    vector<int> leftPath;
    vector<int> rightPath;

    Node *cur = root->left;
    while (cur)
    {
        leftPath.push_back(cur->val);
        if (cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }

    cur = root->right;
    while (cur)
    {
        rightPath.push_back(cur->val);
        if (cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }

    for (int i = (int)leftPath.size() - 1; i >= 0; i--)
    {
        cout << leftPath[i] << " ";
    }

    cout << root->val << " ";

    for (int v : rightPath)
    {
        cout << v << " ";
    }

    return 0;
}
