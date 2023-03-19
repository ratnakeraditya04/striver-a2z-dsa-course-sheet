#include <bits/stdc++.h>
using namespace std; 

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
// Floyd's Cycle Approach - Slow and Fast Pointers  
        // ListNode* slow = head ; 
        // ListNode* fast = head ; 
        // while(fast && fast->next)
        // {
        //     fast = fast->next->next ; 
        //     slow = slow->next ; 
        // }
        // return slow ;

// Attempted - Again 

        ListNode* slow = head; 
        ListNode* fast = head;


        while(fast != NULL && fast->next != NULL )
        {
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return slow; 
    }    
};