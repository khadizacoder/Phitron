// Question: Create a singly linked list and print the middle element. If there are multiple values in the middle print both.

#include <bits/stdc++.h>
using namespace std;
// int sz = 0;
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
    // sz++;
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

void middle_element(Node *head)
{
    vector<int> v;
    Node *tmp = head;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }

    int sz = v.size();

    if (sz % 2 != 0)
        cout << v[sz / 2] << endl;
    else
        cout << v[(sz / 2) - 1] << " " << v[sz / 2];
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

    middle_element(head);
    // print_list(head);

    return 0;
}