#include <bits/stdc++.h>
using namespace std ; 


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string ans = "" ;
        string result = "" ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '.')
            {
                reverse(ans.begin() , ans.end());
                result += ans ; 
                result += '.' ;
                ans = "" ; 
            }
            else
            {
                ans += s[i]; 
            }
        }
        reverse(ans.begin() , ans.end());
        result += ans ; 
        // result += '.' ;
        reverse(result.begin(), result.end()); 
        return result ;
    } 
};