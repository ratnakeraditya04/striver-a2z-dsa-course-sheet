#include <bits/stdc++.h>
using namespace std ; 
class Solution {
  public:
    int equalSum(int n, vector<int> &a) {
        // code here
        
        int totalSum = 0 ; 
        for(int i = 0 ; i < a.size(); i++)
        {
            totalSum += a[i]; 
        }
        
        int leftSum = 0 ; 
        for(int i = 0 ; i < a.size(); i++)
        {
            leftSum += a[i]; 
            if(leftSum - a[i] == totalSum - leftSum )
            {
                return i + 1 ; 
            }
        }
        return -1 ; 
    }
};
