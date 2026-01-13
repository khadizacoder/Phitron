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

void dlelte_any_pos(Node *&head, Node *&tail, int idx)
{
    if (idx < 0)
        return;

    if (idx == 1)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
            tail = NULL;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        if (tmp->next == NULL)
            return;
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
        cout << "Invalid Index" << endl;

    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;

    if(deleteNode == tail)
        tail = tmp;

    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        insert_tail(head, tail, val);
    }
    dlelte_any_pos(head, tail, 2);

    print_list(head);

    return 0;
}