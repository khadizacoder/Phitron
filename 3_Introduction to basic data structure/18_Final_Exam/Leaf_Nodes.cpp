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

int total_node(Node* root)
{
    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = total_node(root->left);
    int r = total_node(root->right);

    return max(l, r) + 1;
}

void leaf_nodes(Node* root)
{
    vector<int> ans;
    if(root == NULL) return;

    queue<pair <Node *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        pair<Node*,int> parent = q.front();
        q.pop();

        Node * node = parent.first;
        int lavel = parent.second;
        
        if(node->left == NULL && node->right == NULL)
            ans.push_back(node->val);

        if(node->left) q.push({node->left, lavel + 1});
        if(node->right) q.push({node->right, lavel + 1});
    }

    // sort(ans.begin(), ans.end(), greater<int>());
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());

    for(int v : ans)
    {
        cout << v << " ";
    }
}

int main()
{
    Node* root = input_tree();

    leaf_nodes(root);
    // cout << total_node(root) << endl;

    return 0;
}