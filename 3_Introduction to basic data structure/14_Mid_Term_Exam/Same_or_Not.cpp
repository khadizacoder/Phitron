#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()
    {
        return head->val;
    }

    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack st;
    myQueue qu;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;
    while (!st.empty() && !qu.empty())
    {
        if (st.top() != qu.front())
        {
            same = false;
            break;
        }
        st.pop();
        qu.pop();
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}