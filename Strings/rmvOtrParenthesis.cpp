#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    string removeOuterParentheses(string s) {

// O(N) - Time Complexity and O(N) - Space Complexity Based Solution 
        // string ans = "" ; 
        // int cnt = 0 ;
        // set<int> st ; 
        // st.insert(0); 
        // for(int i = 0 ; i < s.size() ; i++)
        // {
        //     if(s[i] == '(')
        //     {
        //         cnt++ ;
        //     }
        //     if(s[i] == ')')
        //     {
        //         cnt-- ; 
        //     }
        //     if(cnt == 0 )
        //     {
        //         st.insert(i) ;
        //         if(i != s.size() - 1)
        //         {
        //             st.insert(i + 1) ;
        //         }
        //     }
        // }
        // for(int i = 0 ;i < s.size() ; i++)
        // {
        //     if(st.count(i) > 0)
        //     {
        //         continue ;
        //     }
        //     ans += s[i] ;
        // }
        // return ans ;

// Optimised Solution - O(N) - Time Complexity 
        // int cnt = 0 ; 
        // string ans = "" ;
        // for(int i = 0 ; i < s.size() ; i++)
        // {
        //     if(s[i] == '(')
        //     {
        //         if(cnt > 0 )
        //         {
        //             ans += s[i] ;
        //         }
        //         cnt++ ;
        //     }
        //     else
        //     {
        //         if(cnt > 1)
        //         {
        //             ans += s[i] ;
        //         }
        //         cnt-- ; 
        //     }
        // }
        // return ans ;


// Another Attempt at this problem. 

// Optimized Way - O(N) - Time Complexity and O(N) - Space Complexity

        string ans = "" ; 
        int cnt = 0 ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(')
            {
                if(cnt > 0)
                {
                    ans += s[i] ;
                }
                cnt++ ;
            }
            else 
            {
                if(cnt > 1)
                {
                    ans += s[i]; 
                }
                cnt-- ;
            }
        }
        return ans; 
        
    }
};