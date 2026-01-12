// Question: Create a singly linked list and print the size of the linked list.

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

int size_list(Node *head)
{
    int sz = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }
    cout << size_list(head) << endl;

    return 0;
}