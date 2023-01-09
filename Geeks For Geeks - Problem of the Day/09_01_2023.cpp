#include <bits/stdc++.h>
using namespace std ; 
// User function Template for C++

class Solution {
  public:
    int solve(int N, vector<int> A) {
        // code here
        
        for(int i = N - 1 ; i > 0  ; i--)
        {
            if(A[i] <= 8 )
            {
                return i + 1 ; 
            }
            else 
            {
                continue ; 
            }
        }
        return -1 ; 
        
    }
};