#include <bits/stdc++.h>
using namespace std ; 


class Node {
public:
    int data ; 
    Node * next ; 

    //constructor
    Node(int data ) {
        this -> data = data ;
        this -> next = NULL ; 
    }
};

// Reference is taken because we want changes in original linked list. 

void print(Node* &head)
{
    Node* temp = head ; 

    while(temp->next != NULL)
    {
        cout << temp->data << endl ;
        temp = temp->next ;
    }
}


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
int main()
{

    Node* n1 = new Node(10) ;

    return 0 ; 
}