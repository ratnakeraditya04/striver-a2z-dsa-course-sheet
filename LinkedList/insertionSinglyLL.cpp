#include <bits/stdc++.h>
using namespace std ; 


struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL; 
  }
}; 
//Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       
       Node* temp = new Node(x) ;
       temp->next = head; 
       head = temp ; 
       return head; 
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* temp = head; 
       Node* temp2 = new Node(x) ;
       if(head == NULL)
       {
            return temp2 ;
       }
       while(temp->next != NULL)
       {
           temp = temp->next ; 
       }
       

       
       temp->next = temp2; 
       return head ; 
       
    }