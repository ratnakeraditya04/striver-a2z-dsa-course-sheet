#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
// Std Binary Search Algorithm - O(logN) - Time Complexity 
//         int low = 0 , high = nums.size() - 1 ;
//         while(low <= high)
//         {
//             int mid = low + (high - low)/2 ;          
//             if(nums[mid] == target)
//             {
//                 return mid ; 
//             }
//             else if(nums[mid] > target)
//             {
//                 high = mid - 1 ;
//             }
//             else if(nums[mid] < target)
//             {
//                 low = mid + 1 ;
//             }
//         }
//         return -1 ;

        // int low = 0 ; 
        // int high = nums.size() - 1 ; 
        // while(low <= high)
        // {
        //     int mid = low + (high - low)/2 ;
        //     if(nums[mid] == target)
        //     {
        //         return mid ; 
        //     }
        //     else if(nums[mid] > target)
        //     {
        //         high = mid - 1 ; 
        //     }
        //     else
        //     {
        //         low = mid + 1 ;
        //     }
        // }
        // return -1 ; 

// Attempted Again This Problem - O(logN) - Time Complexity 
        int low = 0 ; 
        int high = nums.size() - 1 ; 

        while(low <= high)
        {
            int mid = low + (high - low)/2 ; 

            if(nums[mid] == target)
            {
                return mid ; 
            }
            else if(nums[mid] > target)
            {
                high = mid - 1 ;
            }
            else
            {
                low = mid + 1 ;
            }
        }
        return -1;

    }
    
};