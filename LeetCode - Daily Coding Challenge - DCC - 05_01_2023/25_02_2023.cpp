#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
// Method - 1 Brute Force Approach - O(N^2) Approach - TLE ans Space Complexity O(1) Approach 
        
//         int maxi = INT_MIN ;
//         int diff = 0 ;
         
//         for(int i = 0 ; i < prices.size() ; i++)
//         {
            
//             for(int j = i + 1 ; j < prices.size() ; j++)
//             {
//                 diff = prices[j] - prices[i] ; 
//                 if(diff > maxi) 
//                 {
//                     maxi = diff ; 
//                 }
//             }
            
//         }
//         if(maxi < 0)
//         {
//            return 0 ;  
//         }
//         return maxi ;
        
        
// Method - 2 Standard Solution - O(N) Solution and O(1) Solution 
// Idea is to store the min element from the left side then calculate the max diiference from this min. 
        int maxPro = 0 ; 
        int minPrice = INT_MAX ; 
        for(int i = 0 ; i < prices.size() ; i++)
        {
            minPrice = min(prices[i] , minPrice) ; 
            maxPro = max(maxPro , prices[i] - minPrice) ; 
        }
        return maxPro ; 
        
        
    }
};