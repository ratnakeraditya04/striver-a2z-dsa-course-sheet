#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
// Method - 1 O(N^2) - Time Complexity - Brute Force. - TLE Error 
        
//         int count ; 
//         for(int i = 0 ; i < nums.size() ; i ++)
//         {
//             count = 0 ;
//             for(int j = 0 ; j < nums.size() ; j++)
//             {
//                 if(nums[j] == nums[i] )
//                 {
//                     count ++ ; 
//                 }              
//             }
//             if(count > floor(nums.size()/ 2 ))
//                 {
//                      return nums[i] ;
//                 }
//         }
//         return -1 ; 

// Method - 2 - Using Hash Maps  = O(NlogN) Time Complexity and Space Complexity = O(N)  
        
        // unordered_map<int , int > mpp ; 
        // int i ;  
        // for(i = 0 ; i < nums.size() ; i++)
        // {
        //     mpp[nums[i]]++ ;
        //     if(mpp[nums[i]] > nums.size()/ 2)
        //     {
        //         return nums[i] ; 
        //     }
        // }
        // return -1 ;
        
// Method - 3 Complete Optimisation Approach - Moore's Voting Algorithm 
// Time Complexity = O(N) 
//         int count = 0 , element = 0  ;
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             if(count == 0 )
//             {
//                 element = nums[i] ; 
//             }
//             if(element == nums[i]) 
// // If we wrote else if instead of if will not go to other if condn. 
//             {
//                 count += 1 ;
//             }
//             else
//             {
//                 count -= 1 ;
//             } 
//         }
//         return element ;


// Revising Moore's Voting Algorithm - O(N) - Time Complexity 

        int cnt = 0 ; 
        int element = 0 ; 

        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(cnt == 0 )
            {
                element = nums[i] ; 
            }
            if(element == nums[i])
            {
                cnt++ ; 
            }
            else
            {
                cnt-- ;
            }
        }
        return element ; 
        
    }
};