#include <bits/stdc++.h>
using namespace std ; 

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int n) {
        // Code here
        long long int cnt = 0 ; 
        sort(arr.begin() , arr.end()) ; 
        
        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i] <= arr[i - 1])
            {
                int preVal = arr[i] ;
                arr[i] = arr[i -1] + 1 ; 
                cnt += abs(arr[i] - preVal) ; 
            }

        }
        return cnt ; 
    }
};