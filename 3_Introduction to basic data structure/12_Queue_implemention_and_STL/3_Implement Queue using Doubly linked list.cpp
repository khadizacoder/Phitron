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

class myQueue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val)
        {
            sz++;
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

        void pop()
        {
            if(head == NULL) return;
            sz--;
            if(head->next == NULL)
            {
                delete head;
                head = NULL;
                tail = NULL;
                return;
            }

            Node* deleteNode = head;
            head = head->next;
            head->prev = NULL;
            delete deleteNode;
        }

        int front()
        {
            if(head == NULL) return -1;
            return head->val;
        }

        int back()
        {
            if(head == NULL) return -1;
            return tail->val;
        }

        int size()
        {
            return sz;
        }

        bool empty()
        {
            return head == NULL;
        }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}