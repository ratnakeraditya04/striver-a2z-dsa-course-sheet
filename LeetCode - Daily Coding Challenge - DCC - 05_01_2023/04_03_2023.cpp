#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long result = 0 ; 
        
        long long subarrayStartIndex = 0 ; 
        
        long long int latestMinIdx  = -1 ; 
        long long int latestMaxIdx = -1 ; 
        
        
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(nums[i] > maxK || nums[i] < minK)
            {
                latestMinIdx = -1 ; 
                latestMaxIdx = -1 ; 
                subarrayStartIndex = i + 1 ; 
            }
            if(nums[i] == minK)
            {
                latestMinIdx = i; 
            }
            if(nums[i] == maxK)
            {
                latestMaxIdx = i ;
            }
            
            result += max(0LL , min(latestMinIdx , latestMaxIdx) - subarrayStartIndex + 1) ; 
        }
        return result ; 
        

    }
};