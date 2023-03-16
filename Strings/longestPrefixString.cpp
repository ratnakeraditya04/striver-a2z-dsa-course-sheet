#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {

// Method - O(maxofallstrings*NlogN) - Sorting Algorithm  
        // if(str.size() == 0 )
        // {
        //     return "" ; 
        // }
        // sort(str.begin() , str.end()) ; 
        // string a = str[0] ; 
        // string b = str[str.size() - 1] ; 
        // string ans = "" ; 
        // for(int i = 0  ; i < min(a.size() , b.size()) ; i++ )
        // {
        //     if(a[i] == b[i])
        //     {
        //         ans += a[i] ; 
        //     }
        //     else
        //     {
        //         break ; 
        //     }
        // }
        // return ans ; 

        
// Another Approach -  O(m*n) Time Complexity Approach 

        // string ans = "" ; 
        // for(int i = 0 ; i < str[0].size() ; i++ )
        // {
        //     for(int j = 1 ; j < str.size() ; j++)
        //     {
        //         if(str[0][i] != str[j][i])
        //         {
        //             return ans ; 
        //         }
        //     }
        //     ans += str[0][i] ; 
        // }
        // return ans ; 

// Attempting again. 

// O(N^2) - Time Complexity Based Solution 

        // if(str.size() == 1)
        // {
        //     return str[0] ; 
        // }
        // string ans = str[0] ; 
        // string result = "" ;
        // for(int i = 1 ; i < str.size() ; i++)
        // {
        //     result = "" ;
        //     for(int j = 0 ; j < min(str[i].size(), ans.size()) ; j++)
        //     {
        //         if(ans[j] == str[i][j])
        //         {
        //             result += str[i][j]; 
        //         }
        //         else if(ans[j] != str[i][j])
        //         {
        //             break ;
        //         }
        //     }
        //     if(result == "" )
        //     {
        //         return "" ;
        //     }
        //     ans = result ;
        // }
        // return ans ;
    }
};