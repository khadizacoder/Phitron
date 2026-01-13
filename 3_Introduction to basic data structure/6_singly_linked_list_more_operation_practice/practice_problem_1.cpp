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

int list_size(Node *head)
{
    int sz = 0;
    while (head != NULL)
    {
        sz++;
        head = head->next;
    }
    return sz;
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

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2);
    }
    if(list_size(head) == list_size(head2))
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    // print_list(head);
    // print_list(head2);
    
    return 0;
}