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
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// void delate_at_head(Node* &head, Node* &tail)
// {
//     Node* deleteNode = head;
//     while(head->next == NULL)
//     {
//         head = NULL;
//         tail = NULL;
//         return;
//     }
//     head = head->next;
//     head->prev = NULL;
//     delete deleteNode;
// }

// different way
void delate_at_head(Node* &head, Node* &tail)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head->next == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
    delate_at_head(head, tail);
    delate_at_head(head, tail);
    print_forword(head);
    return 0;
}