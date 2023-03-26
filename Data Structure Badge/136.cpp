#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    int singleNumber(vector<int>& nums) {
// Brute Force Appraoch - O(N) - Time Complexity and O(N) - Space Complexity - Using Map
        
        // unordered_map<int , int> mpp; 
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     mpp[nums[i]]++ ; 
        // }
        // for(int i = 0 ;i < nums.size() ; i ++)
        // {
        //     if(mpp[nums[i]] == 1)
        //     {
        //         return nums[i] ; 
        //     }
        // }
        // return -1 ; 
// Optimised Approach - Bit Manipulation Approach - O(N) - Time Complexity 
        
        // int k = 0 ; 
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     k = k ^ nums[i] ; 
        // }
        // return k ; 

//  Attempting Again, we got 

        int single = 0 ;
        for(int i = 0 ; i < nums.size(); i++)
        {
            single = single ^ nums[i] ; 
        }
        return single ;
    }
};