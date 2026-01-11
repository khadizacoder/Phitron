#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_forword(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (cin >> val)
    {
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    while (cin >> val)
    {
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    print_forword(head);
    print_forword(head2);
    

    return 0;
}