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

void delete_tail(Node* &head, Node* &tail)
{
    if(head == NULL) return;

    if(head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node* tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    delete tmp->next;
    tmp->next = NULL;
    tail = tmp;
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
    delete_tail(head, tail);
    print_list(head);
    
    return 0;
}