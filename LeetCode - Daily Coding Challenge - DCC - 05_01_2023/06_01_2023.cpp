#include <bits/stdc++.h>
using namespace std ; 



class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

// Greedy Solution - O(NlogN) - Time Complexity 
//         sort(costs.begin() , costs.end()) ; 
// Sort the Array. 
//         int cnt = 0  ; 
//         for(int i = 0 ; i < costs.size() ; i++)
//         {
//             if(coins - costs[i] < 0 )
//             {
//                 break ; 
//             }
//             coins -= costs[i] ; 
//             cnt++ ;  
//         }
//         return cnt ;


// Daily Coding Challenge - LeetCode 
    sort(costs.begin() , costs.end()) ; 

    int cnt = 0 ; 
    for(int i = 0 ; i < costs.size() ; i++)
    {
        if(coins - costs[i] >= 0 )
        {
            cnt++ ; 
            coins = coins - costs[i] ; 
        }
    }
    return cnt ; 
    
    }

};