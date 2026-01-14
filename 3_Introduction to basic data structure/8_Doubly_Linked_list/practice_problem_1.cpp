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

void print_prowerd(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

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

int sz(Node* head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void check_same_or_not(Node* head1, Node* head2)
{
    while (head1 != NULL)
    {
        if(head1->val != head2->val)
        {
            cout << "NO" << endl;
            break;
        }
        else{
            cout << "YES" << endl;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
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
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val2;
    while (true)
    {
        cin >> val2;
        if(val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }

    if(sz(head) == sz(head2))
    {
        check_same_or_not(head, head2);
    }
    else{
        cout << "NO" << endl;
    }
    
    // print_prowerd(head);
    // print_prowerd(head2);

    return 0;
}