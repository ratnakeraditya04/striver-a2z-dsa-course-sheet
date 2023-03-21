#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data ; 
        if(this->next != NULL)
        {
            delete next ; 
            next = NULL ;
        }
    }
};

void insertNode(Node* tail, int element, int d )
{
    if(tail == NULL)
    {
        Node* temp = new Node(d) ;
        temp->next = tail ; 
        tail->next = temp ;
    }
    // if(tail  )
}