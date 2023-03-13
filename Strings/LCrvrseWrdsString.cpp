#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:

    string reverseWords(string s) {
// O(N) - Time Complexity Based Solution 
        int i = 0 ; 
        while(s[i] == ' ')
        {
            i++ ; 
        }
        int j = s.size() - 1 ;
        while(s[j] == ' ')
        {
            j-- ;
        }
        string ans = "" ; 
        string result = "" ;
        for(; i <= j ; i++)
        {
            if(s[i] == ' ' && s[i + 1] == ' ' )
            {
                continue ;
            }
            if(s[i] == ' ')
            {
                reverse(ans.begin() , ans.end()) ; 
                result += ans ;
                result += ' ' ;  
                ans = "" ;
            }
            else
            {
                ans += s[i]; 
            }
        }
        reverse(ans.begin() , ans.end()) ; 
        result += ans ;

        reverse(result.begin() , result.end()); 

        return result ;
        
    } 
};