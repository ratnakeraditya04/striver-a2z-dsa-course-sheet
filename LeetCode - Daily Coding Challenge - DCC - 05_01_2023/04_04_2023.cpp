#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int partitionString(string s) {
// O(N) - Time Complexity and O(N) - Space Complexity 
        int count = 1 ;  
        unordered_map<int, int > mp ; 
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                count ++ ; 
                mp.clear() ; 
            }
            
            mp[s[i]] ++ ; 
           
        }
        return count ;
    }
};