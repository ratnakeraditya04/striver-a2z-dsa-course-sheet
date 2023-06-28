#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int helper(int idx , vector<int>& height)
    // {
    //     if(idx == 0)
    //     {
    //         return 0 ;
    //     }
    //     int left = helper(idx - 1 , height) + abs(height[idx] - height[idx - 1]) ;
    //     int right = INT_MAX ;

    //     if(idx > 1)
    //     {
    //         right = helper(idx - 2 , height) + abs(height[idx] - height[idx - 2]);
    //     }
    //     return min(left , right ) ;

    // }

    int helper(int idx, vector<int> &height, vector<int> &dp)
    {
        if (idx == 0)
        {
            return 0;
        }

        if (dp[idx] != -1)
        {
            return dp[idx];
        }

        int left = helper(idx - 1, height, dp) + abs(height[idx] - height[idx - 1]);
        int right = INT_MAX;

        if (idx > 1)
        {
            right = helper(idx - 2, height, dp) + abs(height[idx] - height[idx - 2]);
        }

        dp[idx] = min(left, right);
        return dp[idx];
    }
    int minimumEnergy(vector<int> &height, int n)
    {
        // Code here

        // Recursive Solution - Time Limit Exceeded
        // return helper(n - 1 , height) ;
        // Optimization - Memoization

        // vector<int> dp(n , -1) ;
        // return helper(n - 1 , height , dp) ;

        // Optimization - Tabulation Approach
        // vector<int> dp(n , -1) ;

        // dp[0] = 0 ;
        // int firstStep = INT_MAX ;
        // int secondStep = INT_MAX ;
        // for(int i = 1 ; i < n ; i++)
        // {
        //     firstStep = dp[i - 1] + abs(height[i] - height[i - 1] ) ;
        //     if( i > 1)
        //     {
        //         secondStep = dp[i - 2] + abs(height[i] - height[i - 2] ) ;
        //     }

        //     dp[i] = min(firstStep , secondStep) ;
        // }

        // return dp[ n - 1] ;

        // Optimization - Space Optimization Approach

        int prev2 = 0;
        int prev = 0;

        int fs = INT_MAX;
        int ss = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            fs = prev + abs(height[i] - height[i - 1]);

            if (i > 1)
            {
                ss = prev2 + abs(height[i] - height[i - 2]);
            }

            int curr = min(fs, ss);

            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};