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

class myQueue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;

        void push(int v)
        {
            Node* newNode = new Node(v);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = newNode;
        }

        void pop()
        {
            if(head == NULL) return;

            if(head->next == NULL)
            {
                delete head;
                head = NULL;
                tail = NULL;
                return;
            }

            Node* deleteNode = head;
            Node * tmp = head;
            tmp = tmp->next;
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
            int sz = 0;
            Node* tmp = head;
            while (head != NULL)
            {
                sz++;
                tmp = tmp->next;
            }
            return sz;
        }

        bool empty()
        {
            return head == NULL;
        }
};

int main()
{
    
    return 0;
}