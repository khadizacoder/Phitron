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

void print_singly_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        /* code */
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void insert_an_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    if (idx < 0)
        return;
    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        if (tmp == NULL)
            break;
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Invalid index" << endl;
        return;
    }

    sz++;
    if (tmp->next == NULL)
    {
        tmp->next = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
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

    insert_an_any_pos(head, tail, 2, 100);
    insert_an_any_pos(head, tail, 2, 200);
    print_singly_linked_list(head);
    cout << "Size: " << sz << endl;

    return 0;
}