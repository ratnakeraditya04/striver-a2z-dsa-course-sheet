#include <bits/stdc++.h>
using namespace std; 

struct Node
{
    int data;
    Node* next;
    Node( int x) {  data = x;  next = NULL; }
}; 

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        
// Method - 1 - Using Iterative Solution - O(N) - Time Complexity  
        // if(head == NULL)
        // {
        //     return 0 ; 
        // }
        // int count = 0 ; 
        // while(head)
        // {
        //     count++ ; 
        //     head= head ->next ; 
        // }
        // return count ; 
        
// Method - 2 - Using Recursive Solution - O(N) - Time Complexity 
        // if(head->next == NULL)
        // {
        //     return 1 ; 
        // }
        // return getCount(head->next) + 1 ; 
        
// Another Attempt at this set of Question

        int cnt = 0 ; 
        if(head == NULL)
        {
            return 0 ; 
        }
        
        Node* temp = head; 
        while(temp != NULL)
        {
            cnt++ ;
            temp = temp->next ; 
        }
        return cnt ;
    }
};
   