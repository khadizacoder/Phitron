#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_max_value(Node* head)
{
    Node* tmp = head;
    int mx = tmp->val;
    while(tmp != NULL)
    {
        if(mx < tmp->val)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << mx << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val)
    {
        insert_tail(head, tail, val);
    }

    print_max_value(head);
    // print_list(head);
    
    return 0;
}