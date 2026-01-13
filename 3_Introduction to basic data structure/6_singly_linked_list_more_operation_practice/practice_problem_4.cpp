#include <bits/stdc++.h>
using namespace std;
int sz = 0;
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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail(Node *&head, Node *&tail, int val)
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
    tail = newNode;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    sz++;
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
        insert_tail(head, tail, val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx < 0)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == 0)
        {
            insert_head(head, tail, val);
        }
        else if (idx == sz)
        {
            insert_tail(head, tail, val);
        }
        else if (idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            insert_any_pos(head, tail, idx, val);
        }

        print_list(head);
    }

    return 0;
}