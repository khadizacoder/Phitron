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
    newNode->prev = tail;
    tail = newNode;
}

void reversr_linked_list(Node* &head, Node* &tail)
{
    for(Node* i = head, *j = tail; i != j && i->prev != j ; i = i->next, j = j->prev )
    {
        swap(i->val, j->val);
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }

    print_list(head);
    reversr_linked_list(head, tail); 
    print_list(head);

    // cout << head->val << " " << tail->val;

    return 0;
}