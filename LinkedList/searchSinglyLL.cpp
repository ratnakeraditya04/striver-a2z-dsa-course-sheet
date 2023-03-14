#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node *head, int key)
    {
        // Code here
        // Solution - O(N) - Time Complexity

        // if(head == NULL)
        // {
        //     return false ;
        // }
        // while(head->next != NULL)
        // {
        //     if(head->data == key)
        //     {
        //         return true;
        //     }
        //     head = head->next ;
        // }
        // return false;

        // Another Attempt
        if (head == NULL)
        {
            return false;
        }

        Node *temp = head;

        while (temp)
        {
            if (temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};