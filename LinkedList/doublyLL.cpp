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



