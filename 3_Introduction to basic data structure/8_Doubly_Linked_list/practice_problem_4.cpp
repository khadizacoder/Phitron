#include <bits/stdc++.h>
using namespace std;
int sz = 0;
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

void printing_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_forward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
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
    newNode->prev = tail;
    tail = newNode;
}

void insert_any_pos(Node *head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        if (tmp->next == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        tmp = tmp->next;
    }
    if (tmp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
    sz++;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }

        if (idx == 0)
            insert_head(head, tail, val);

        else if (idx == sz)
        {
            insert_tail(head, tail, val);
        }
        else insert_any_pos(head, idx, val);

        printing_list(head);
        print_forward(tail);
    }
    // cout << sz << endl;

    return 0;
}