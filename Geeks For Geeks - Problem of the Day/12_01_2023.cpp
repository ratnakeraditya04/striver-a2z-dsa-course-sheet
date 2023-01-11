#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int minimizeSum(int n, vector<int> arr) {
        // code here
        
        priority_queue<int , vector<int> , greater<int>> pq ; 
        for(int i = 0 ; i < n ; i++)
        {
            pq.push(arr[i] ) ; 
        }
        int sum = 0 ; 
        while(pq.size() > 1 )
        {
            int first = pq.top() ; 
            pq.pop(); 
            
            int second = pq.top() ; 
            pq.pop() ; 
            
            sum += first + second ; 
            
            pq.push(first + second) ;
        }
        return sum ; 
    }
};