#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int num)
    {
        val = num;
        next = NULL;
    }
};

class Solution
{
public:
    bool isPrime(int x)
    {
        if (x == 2)
        {
            return true;
        }
        if (x == 3)
        {
            return true;
        }
        for (int i = 2; i <= sqrt(x) + 1; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    Node *primeList(Node *head)
    {

        if (head == NULL)
        {
            return head;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->val == 1)
            {
                temp->val = 2;
                temp = temp->next;
            }
            else if (isPrime(temp->val) == true)
            {
                temp = temp->next;
            }
            else if (isPrime(temp->val) != true)
            {
                int x = temp->val;
                int i = 1;
                while (isPrime(temp->val) == false)
                {
                    if (isPrime(x - i))
                        temp->val = x - i;
                    else if (isPrime(x + i))
                        temp->val = x + i;
                    i++;
                }
                temp = temp->next;
            }
        }
        return head;
    }
};