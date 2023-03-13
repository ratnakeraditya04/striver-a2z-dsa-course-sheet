#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    bool isSubsequence(string s, string t) {
 
// O(N) - Time Complexity Based Solution 
        int j = 0 ; 

        int i = 0 ;
        for(; i < t.size() ; i++)
        {
            if(t[i] == s[j])
            {
                j++ ;
            }
            else
            {
                continue ;
            }
        }
        if(j == s.size())
        {
            return true ;
        }
        return false ;
        
    }
};