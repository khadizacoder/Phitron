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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    if (head == NULL || head->next == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    long long mn = head->val;
    long long mx = head->val;

    for (Node *i = head; i != NULL; i = i->next)
    {
        mn = min(mn, (long long)i->val);
        mx = max(mx, (long long)i->val);
    }

    cout << mx - mn << endl;

    return 0;
}