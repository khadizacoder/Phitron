// Question: Create a singly linked list and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.

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

void printing_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

bool nestadloop_duplicate_check(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        Node* tmp2 = tmp->next;
        while (tmp2 != NULL)
        {
            if(tmp->val == tmp2->val)
            {
                return true;
            }
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    return false;
}

bool sort_duplicate_check(Node* head)
{
    vector<int> val;
    Node* tmp = head;
    while (tmp != NULL)
    {
        val.push_back(tmp->val);
        tmp = tmp->next;
    }
    
    sort(val.begin(), val.end());

    for(int i = 0; i < val.size(); i++)
    {
        if(val[i] == val[i + 1])
            return true;
    }
    return false;
}

bool free_array_duplicate_check(Node* head)
{
    int freq[101] = {0};
    Node* tmp = head;
    while (tmp != NULL)
    {
        freq[tmp->val]++;
        if(freq[tmp->val] > 1)
            return true;
        tmp = tmp->next;
    }
    return false;
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

    if(free_array_duplicate_check(head))
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    // printing_list(head);

    return 0;
}