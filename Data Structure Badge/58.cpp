#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int lengthOfLastWord(string s) {
        
// Time Complexity - O(N) 
        // int n = s.size() - 1 ; 
        // int count = 0 ; 
        
        // for(int i = n ; i > -1 ; i--)
        // {
        //     if(s[i] == ' ' && count > 0)
        //     {
        //         return count ; 
        //     }
        //     if(s[i] != ' ')
        //     {
        //         count++ ; 
        //     }

        // }
        // return count ; 

// Attempting Again - This Problem 
        int i = s.size() - 1 ; 

        while(i >= 0 && s[i] == ' ')
        {
            i-- ;
        }

        int cnt = 0 ;
        while(i >= 0 && s[i] != ' ')
        {
            cnt++  ; 
            i-- ;
        }
        return cnt; 
    }
};