#include <bits/stdc++.h>
using namespace std ;

class Solution{
    public:
    bool isMaxHeap(int a[], int n)
    {
        // Your code goes here
        
        for(int i = 0 ; i < n ; i++)
        {
            if(2*i + 1 >= n)
            {
                break ;
            }
            if((i - 1)/2 < 0)
            {
                i = 1;
            }
            if(a[2*i + 1] > a[i] || a[2*i + 2] > a[i])
            {
                return false; 
            }
        }
        return true ;
    }
};