#include <bits/stdc++.h>
using namespace std ; 


class Node {
public : 
    int data ;
    Node* next ; 

    Node(int data )
    {
        this->data = data ; 
        this->next = NULL ; 
    }
    // Destructor we have defined.
    ~Node() {
        int value = this->data ; 
        if(this->next != NULL)
        {
            // delete next ;
            this->next = NULL ;
            delete next ;
        }

    }
}; 


void deletion(Node* head , int position )
{
    if(position == 1)
    {
        Node* temp = head ;
        head = head->next ;
        temp->next = NULL ;
        delete temp ;
    }
    else
    {
        Node* prev = NULL ;
        Node* curr = head ;
        int cnt = 1 ; 
        while(cnt < position)
        {
            prev = curr; 
            curr = curr->next ;
            cnt++ ;
        }
        if(cnt == position)
        {
            Node* temp = curr; 
            prev->next = curr->next ;
            curr->next = NULL ;
            delete curr; 
        }
    }
}