#include <bits/stdc++.h>
using namespace std; 


class Solution {
public:
    bool rotateString(string s, string goal) {

// O(N^2) - Time Complexity Based Solution 
        if(s.size() > goal.size())
        {
            return false ;
        }
        string result = goal ;

        for(int i = 0 ; i < goal.size() ; i++)
        {
            result += goal[i] ;
        } 
        for(int i = 0 ; i < result.size() ; i++)
        {
            if(result.substr(i, s.size()) == s)
            {
                return true ;
            }
        }
        return false ;
    }
};