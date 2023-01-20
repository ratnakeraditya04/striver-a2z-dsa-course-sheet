#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int maxSubarray(vector<int>nums)
    {
        int sum = 0 ;
        int maxSum = INT_MIN ; 
        for(int i = 0 ; i < nums.size();i++)
        {
            sum += nums[i]; 
            if(sum > maxSum)
            {
                maxSum = sum ; 
            }
            if(sum < 0)
            {
                sum = 0 ; 
            }
        }
        return maxSum ; 
    }
    int minSubarray(vector<int> nums)
    {
        int minSum = INT_MAX ; 
        int sum = INT_MAX ; 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(sum > 0 )
            {
                sum = nums[i] ; 
            }
            else
            {
                sum += nums[i] ; 
            }

            minSum = min(minSum , sum); 
        }
        return minSum ; 
    }
    int maxSubarraySumCircular(vector<int>& nums) {

// Brute Force Solution - O(N^2) - Time Complexity Based Solution - TLE
        // int sum = 0  ;
        // int max_sum = INT_MIN; 

        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     sum = 0 ;
        //     for(int j = 0; j < nums.size() ; j++)
        //     {
        //         sum += nums[(i + j) % nums.size()] ;
        //         if(sum > max_sum)
        //         {
        //             max_sum = sum ; 
        //         }
        //         if(sum < 0)
        //         {
        //             sum = 0 ; 
        //         }
        //     }
        // }
        // return max_sum ; 

// Brute Force Solution - O(N^2) - Time Complexity and O(N) - Space Complexity 
        // vector<int> temp = nums; 
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     temp.push_back(nums[i]); 
        // }

        // int max_sum = INT_MIN ;
        // int sum = 0 ; 
        // int i = 0 ;
        // while(i < nums.size())
        // {
        //     sum = 0 ;
        //     for(int j = i ; j < nums.size() + i ; j++)
        //     {
        //         sum += temp[j] ; 
        //         if(max_sum < sum )
        //         {
        //             max_sum = sum ;
        //         }
        //         if(sum < 0)
        //         {
        //             sum = 0; 
        //         }
        //     }
        //     i++ ;
        // }
        // return max_sum ;
    
// Optimised Solution - O(N) - Time Complexity

        int nonCircularSum = maxSubarray(nums) ; 
        int totalSum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            totalSum += nums[i]; 
        }
        int circularSum = totalSum - minSubarray(nums) ;
// When all the elements are negative then circularSum will come as zero as total sum and minimum subarray sum are equal then we have to return circular Sum. 
        if(circularSum == 0 )
        {
            return nonCircularSum ; 
        }
        return max(nonCircularSum , circularSum) ; 

        // int total = 0, maxSum = A[0], curMax = 0, minSum = A[0], curMin = 0;
        // for (int& a : A) {
        //     curMax = max(curMax + a, a);
        //     maxSum = max(maxSum, curMax);
        //     curMin = min(curMin + a, a);
        //     minSum = min(minSum, curMin);
        //     total += a;
        // }
        // return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;

    }
};