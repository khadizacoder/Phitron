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

void delete_at_any_pos(Node* &head, Node* &tail, int idx)
{
    if(head == NULL) return;

    // delete head
    if(idx == 0)
    {
        Node* deleteNode = head;
        head = head->next;

        if(head != NULL)
            head->prev = NULL;
        else
            tail = NULL;

        delete deleteNode;
        return;
    }

    Node* tmp = head;
    for(int i = 0; i < idx - 1; i++)
    {
        if(tmp == NULL) return;
        tmp = tmp->next;
    }

    if(tmp == NULL || tmp->next == NULL) return;

    Node* deleteNode = tmp->next;
    tmp->next = deleteNode->next;

    if(deleteNode->next != NULL)
        deleteNode->next->prev = tmp;
    else
        tail = tmp;

    delete deleteNode;
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
    delete_at_any_pos(head, tail, 3);
    print_forword(head);
    return 0;
}