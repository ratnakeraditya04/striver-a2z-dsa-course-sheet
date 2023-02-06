#include <bits/stdc++.h>
using namespace std ; 



class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
// Method - 1 - Time Complexity - O(N) 

//         vector <int> :: iterator it = nums.begin() ;
//             int i = 1  , k ;
//             while(i < n)
//             {
//                 k = nums[i] ;
//                 nums[i] = nums[ n + i] ;
//                 nums[n + i] = k ; 
                
//                 i = i + 2 ;
//             }
//         return nums ;    
        
        
// Method - 2 - Time Complexity - O(N) 
        
//         vector <int> result ;
//         for(int i = 0 ; i < n ; i++)
//         {
//             int k  = nums[i] ;
//             int l  = nums[i + n] ;
//             result.push_back(k);
//             result.push_back(l);
            
//         }
//         return result ;
        
        
        
// Method - 3 - Time Complexity - O(N) 
        vector<int> result ; 
        
        for(int i = 0 ; i < n ; i++)
        {
            result.push_back(nums[i]) ; 
            result.push_back(nums[n + i]); 
            
        }
        return result ; 
           
    }
};