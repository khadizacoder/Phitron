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
    tail = newNode;
}

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

bool ascending_order_check(Node* head)
{
    if(head == NULL || head->next == NULL) return true;

    Node* tmp = head;
    while (tmp->next != NULL)
    {
        if(tmp->val > tmp->next->val)
        {
            return false;
        }
        tmp = tmp->next; 
    }
    return true;
}

bool ascending_order_check2(Node* head)
{
    vector<int> v;
    Node* tmp = head;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next; 
    }
    
    for(int i = 0; i < v.size() -1; i++)
    {
        if(v[i] > v[i + 1])
            return false;
    }
    return true;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    if(ascending_order_check2(head))
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    // print_list(head); 

    return 0;
}