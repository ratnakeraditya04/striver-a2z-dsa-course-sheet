#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {

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

// Optimised Solution - O(N) - Time Complexity
                int total = 0, maxSum = A[0], curMax = 0, minSum = A[0], curMin = 0;
        for (int& a : A) {
            curMax = max(curMax + a, a);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + a, a);
            minSum = min(minSum, curMin);
            total += a;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;

    }
};