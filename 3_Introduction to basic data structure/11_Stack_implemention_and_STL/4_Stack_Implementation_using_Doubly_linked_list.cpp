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
    int sz = 0;

    void push(int val)
    {
        sz++;
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
        if(head == NULL) return;

        sz--;

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }

        Node *deleteNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete deleteNode;
    }
    int top()
    {
        if (tail == NULL) return -1;
        return tail->val;
    }
    int size()
    {
        return sz;
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
    myStack st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }

    while (n--)
    {
        if (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }

    return 0;
}