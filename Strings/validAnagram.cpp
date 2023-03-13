#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    bool isAnagram(string s, string t) {
        
// Method - 1 - A rubbish Solution. Never use it when you have time. Using STL
// O(NlogN) - Solution 
        
//         sort(s.begin() , s.end()) ; 
//         sort(t.begin() , t.end()) ; 
//         return s == t ; 

        
// Method - 2 - HashMaps - O(N) - Time Complexity and O(N) - Space Complexity
        
        // if(s.size() != t.size())
        // {
        //     return false ; 
        // }
        // int n = s.size() ; 
        // unordered_map<int , int> mpp1 ; 
        // unordered_map<int , int> mpp2 ; 
        //     for(int i = 0  ; i < n  ; i++ )
        //     {
        //         mpp1[s[i] - 'a'] += 1 ; 
        //         mpp2[t[i] - 'a'] += 1 ; 
        //     }
        //     if(mpp1 == mpp2)
        //     {
        //         return true ; 
        //     }
        //    return false ; 

// More Optimized Solution - O(N) - Time Complexity and O(N) - Space Complexity
        if(s.size() != t.size())
        {
            return false ; 
        }
        unordered_map<char,int> mp ; 
        for(int i = 0 ; i < s.size() ; i++)
        {
            mp[s[i]]++; 
            mp[t[i]]--;
        }
        for(auto a : mp)
        {
            if(a.second != 0)
            {
                return false ;
            }
        }
        return true ;
    }
};