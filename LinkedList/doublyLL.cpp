#include <bits/stdc++.h>
using namespace std ;


class Node {
    public : 
    int data ; 
    Node* next ; 
    Node* prev ; 

    Node(int data )
    {
        this->data = data ;
        next = NULL ;
        prev = NULL ; 
    }
    ~Node()
    {
        int val = this->data ;
        if(next != NULL)
        {
            delete next ;
            next = NULL ; 
        }

    }
}; 

int getLen(Node* head)
{
    int cnt = 0 ; 
    Node* temp = head; 

    while(temp != NULL)
    {
        cnt++ ;
        temp = temp->next ; 
    }
    return cnt ; 
}

void print(Node* head)
{
    Node* temp = head ; 
    while(temp != NULL)
    {
        cout << temp->data << endl ; 
        temp = temp->next; 
    }
}


void insertionAtHead(Node* &head ,int d)
{
    Node* temp = new Node(d) ;
    temp->next = head ; 
    head->prev = temp ;
    head = temp ;  
}


void insertionAtTail(Node* head , int d)
{
    if(head == NULL)
    {
        insertionAtHead(head , d); 
    }

    Node* temp = new Node(d) ;

    while(head->next != NULL)
    {
        head->next = head  ; 
    }

    Node* tail = head; 
    tail->next = temp ;
    temp->prev = tail ; 
    tail = temp  ; 
}


void insertAtPosition(Node* head , int position , int d )
{
    Node* temp = head; 

    int pos = 1 ; 
    if(position == 1)
    {
        insertionAtHead(head , d) ; 
    }
    while(pos < position - 1)
    {
        temp = temp->next ; 
        pos++; 
    }

    Node* nodeToInsert = new Node(d) ;
    nodeToInsert->next = temp->next ;
    temp->next->prev = nodeToInsert ; 
    temp->next = nodeToInsert ;  
    nodeToInsert->prev = temp; 

}

void deleteNode(int position , Node* & head)
{
    if(position == 1)
    {
        Node* temp = head; 
        temp->next->prev = NULL ;
        head = temp->next ;  
        temp->next = NULL ;
        delete temp  ;
    }
    Node* curr = head ; 
    Node* previ = NULL ; 
    int cnt = 1; 
    while(cnt < position)
    {
        cnt++ ;
        curr->next = curr ; 
        previ = curr ;
    }

    curr->prev = NULL ; 
    previ->next = curr->next;
    curr->next == NULL ; 
    delete curr ; 

}