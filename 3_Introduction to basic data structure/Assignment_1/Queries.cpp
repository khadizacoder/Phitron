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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void delete_at_value(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }
    else if (idx == 0)
    {
        // head delete
        Node *deletHead = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deletHead;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (tmp->next == NULL)
            return;
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
        return;

    Node *delateValue = tmp->next;
    tmp->next = tmp->next->next;

    if (delateValue == tail)
    tail = tmp;
    
    delete delateValue;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_value(head, tail, v);
        }

        print_linked_list(head);
    }

    return 0;
}
