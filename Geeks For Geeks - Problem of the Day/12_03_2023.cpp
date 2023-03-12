#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        
// Brute Force method - O(N^2) - Time Complexity 
        int maxCnt = 0 ;
        int i = 0 ;
        int row = 0 ; 
        for( ;i < N; i++)
        {
            int cnt = 0 ; 
            for(int j = 0 ; j < N ; j++)
            {
                if(mat[i][j] == 1)
                {
                    cnt++ ; 
                }
            }
            if(cnt > maxCnt)
            {
                maxCnt = cnt ; 
                row = i ; 
            }
        }
        
        vector<int> result ; 
        result.push_back(row); 
        result.push_back(maxCnt); 
        return result ;
        
// Optimised Solution - O(NlogN) - Time Complexity 
        int mxCnt = 0 ; 
        int row = 0 ; 
        
        for(int i = 0 ; i < N ;i++)
        {
            int idx = lower_bound(mat[i].begin() , mat[i].end(), 1) - mat[i].begin(); 
            int lower = N - 1 - idx + 1 ;
            if(lower > mxCnt)
            {
                mxCnt = lower ;
                row = i ; 
            }
        }
        return {row, mxCnt};
    }
};