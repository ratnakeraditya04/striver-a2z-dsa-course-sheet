#include <bits/stdc++.h>
using namespace std ;


class Solution {
public:
    string largestOddNumber(string num) {

// O(N) - Time Complexity Based Solution 
        // if((num[num.size() - 1] - '0') % 2 == 1)
        // {
        //     return num ; 
        // }
        // int idx = -1 ; 
        // for(int i = num.size() - 1 ; i >= 0 ; i--)
        // {
        //     if((num[i] - '0') % 2 == 1)
        //     {
        //         idx = i ; 
        //         break ; 
        //     }
        // }
        // if(idx == -1)
        // {
        //     return "" ;
        // }
        // string result = "" ; 
        // for(int j = 0 ; j <= idx ;j++)
        // {
        //     result += num[j]; 
        // }
        // return result ;

// Another Approach 


        string str = num ;
        // str.assign(num) ; 
        for(int i = num.size() - 1 ; i >= 0 ; i--)
        {
            if((num[i] - '0') % 2 == 1)
            {
                return str; 
            }
            else
            {
                str.pop_back() ; 
            }
        }
        return "" ;
        
    }
};