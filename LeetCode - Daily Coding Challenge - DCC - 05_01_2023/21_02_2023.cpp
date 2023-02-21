#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
// Brute Force Method - O(N) - Time Complexity and O(N) - Space Complexity - Using Map 
        // unordered_map<int ,int> mp ; 
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     mp[nums[i]]++ ; 
        // }
        // for(auto it : mp)
        // {
        //     if(it.second == 1)
        //     {
        //         return it.first ; 
        //     }
        // }
        // return -1 ; 
        
// Slightly Optimise Method - Time Complexity - O(N) and O(1) - Space Complexity 
//         if(nums.size() == 1)
//         {
//             return nums[0] ; 
//         }
//         for(int i = 0 ;i < nums.size() ; i+=2)
//         {
//             if(nums[i] != nums[i + 1])
//             {
//                 return nums[i] ; 
//             }
//         }
//         return -1 ; 

 
// Optimised Method - O(N) - Time Complexity 
        int x = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            x = x ^ nums[i] ;
        }
        return x ;
        
// Optimised Method - O(logN) - Binary Search Algorithm 
        
        
        
    }
};