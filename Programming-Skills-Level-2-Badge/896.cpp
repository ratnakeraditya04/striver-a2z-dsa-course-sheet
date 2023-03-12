#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
// Attempt No - 1
    // bool isIncreasing(vector<int>nums)
    // {
    //     bool flag = false ; 
    //     for(int i = 0 ; i < nums.size() - 1 ; i++ )
    //     {
    //         if(nums[i] <= nums[i + 1] )
    //         {
    //             flag = true ; 
    //         }
    //         else 
    //         {
    //             return false ; 
    //         }
    //     }
    //     return flag ; 
    // }
    
    // bool isDecreasing(vector<int>nums)
    // {
    //     bool flag = false ; 
    //     for(int i = 0 ; i < nums.size() - 1 ; i++)
    //     {
    //         if(nums[i] >= nums[i + 1])
    //         {
    //             flag = true ; 
    //         }
    //         else 
    //         {
    //             return false ;   
    //         }
    //     }
    //     return flag ; 
    // }
    // bool isMonotonic(vector<int>& nums) {
    //     if(nums.size() == 1)
    //     {
    //         return true ; 
    //     }
    //     return isIncreasing(nums) || isDecreasing(nums); 

// Attempt No - 2 - 12_03_2023 


    bool isIncreasing(vector<int> nums)
    {
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] < nums[i - 1])
            {
                return false ;
            }
        }
        return true; 
    }
    bool isDecreasing(vector<int> nums)
    {
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] > nums[i - 1])
            {
                return false ;
            }
        }
        return true ;
    }
    bool isMonotonic(vector<int> nums)
    {
        if(isIncreasing(nums) || isDecreasing(nums))
        {
            return true ;
        }
        return false ;    
          
    }
};