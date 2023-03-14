#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    string reverseWords(string s) {

// O(N) - Time Complexity - Optimized Solution 
        string ans = "" ; 
        if(s.size() == 1)
        {
            return s ;
        }
        string result = "" ; 

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == ' ')
            {
                reverse(ans.begin() , ans.end());
                result += ans ;
                result += ' ' ;
                ans = "" ; 
            }
            else
            {
                ans += s[i] ;
            }
        }
        reverse(ans.begin() , ans.end()); 
        result += ans ;
        return result ;
        
    }
};