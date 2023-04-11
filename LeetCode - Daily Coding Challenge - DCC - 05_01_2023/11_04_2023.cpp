#include <bits/stdc++.h>
using namespace std ; 



class Solution {
public:
    string removeStars(string s) {

// O(N) - Time Complexity Based Solution 
        // string result = "" ; 
        // stack<char> st ; 
        // for(int i = 0; i < s.size() ; i++)
        // {   
        //     st.push(s[i]); 
        // }
        // int cnt = 0 ;
        // while(!st.empty())
        // {
        //     if(st.top() == '*')
        //     {
        //         cnt++ ;
        //         st.pop(); 
        //     }
        //     else if(cnt == 0 && st.top() != '*')
        //     {
        //         result += st.top() ; 
        //         st.pop() ;
        //     }
        //     else if(cnt > 0 && st.top() != '*')
        //     {
        //         cnt-- ;
        //         st.pop(); 
        //     }
        // }
        // reverse(result.begin() , result.end()); 
        // return result ;

// Attempting Again this Problem 

        stack <int> st ;

        for(int i = 0 ; i < s.size() ; i++)
        {
            st.push(s[i]);
        } 

        int cnt = 0 ; 
        string result = "" ; 
        while(!st.empty())
        {
            if(st.top() == '*')
            {
                cnt++ ; 
                st.pop(); 
            }
            else if(cnt == 0 && st.top() != '*')
            {
                result += st.top() ;
                st.pop() ;
            }
            else if(cnt > 0 && st.top() != '*')
            {
                st.pop() ;
                cnt-- ;
            }
        }
        reverse(result.begin() , result.end()); 
        return result ;
        
    }
};