#include <bits/stdc++.h>
using namespace std;  


class Solution {
public:
    bool isIsomorphic(string s, string t) {

// O(N) - Time Complexity and O(N) - Space Complexity Based Solution. 
        int i = 1 ; 
        
        int j = 1 ; 
        if(s.size() != t.size())
        {
            return false ;
        }
        unordered_map<char, int> mp1 ; 
        unordered_map<char, int> mp2 ;
        vector<int> v1, v2 ; 
        for(int k = 0 ; k < s.size() ; k++)
        {
            if(mp1.find(s[k]) != mp1.end())
            {
                continue ;
            }
            else
            {
                mp1[s[k]] = i ; 
                i++ ;
            }
        } 
        for(int k = 0 ; k < t.size() ; k++)
        {
            if(mp2.find(t[k]) != mp2.end())
            {
                continue ;
            }
            else
            {
                mp2[t[k]] = j ; 
                j++;
            }
        }


        for(int k = 0 ; k < s.size() ; k++)
        {
            if(mp1[s[k]] != mp2[t[k]])
            {
                return false ; 
            }
        }
        return true ;

         
        
    }
};