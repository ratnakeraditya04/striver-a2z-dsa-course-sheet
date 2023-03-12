#include <bits/stdc++.h>
using namespace std;


// Note: This question is the same as 1991: https://leetcode.com/problems/find-the-middle-index-in-array/
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        
        // Attempt No - 1 - O(N) - Time Complexity

        // int totalSum = 0 ;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     totalSum += nums[i] ;
        // }
        // int leftSum = 0 ;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     leftSum += nums[i] ;
        //     if((leftSum - nums[i]) == (totalSum - leftSum))
        //     {
        //         return i ;
        //     }
        // }
        // return -1 ;

        // Attempt - 2 - O(N) - Time Complexity

        int totalSum = 0;
        for (auto value : nums)
            totalSum += value;

        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            leftSum += nums[i];
            if ((leftSum - nums[i]) == (totalSum - leftSum))
            {
                return i;
            }
        }
        return -1;
    }
};