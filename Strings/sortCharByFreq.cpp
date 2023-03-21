#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
// Sorting Customized Function 
    static bool cmp(pair <char ,int> & a , pair<char , int> & b )
    {
        return a.second > b.second ; 
    }


    string frequencySort(string s) {

// Needed to see the code to complete the problem. 
// Unordered Map and Vector Solution - O(N) - Space Complexity 
        unordered_map<char ,int> mp ; 
        for(int i = 0 ; i < s.size() ; i++)
        {
            mp[s[i]]++ ; 
        }   

        vector<pair<char ,int>> v;

        for(auto it : mp)
        {
            v.push_back(it) ;
        } 

        sort(v.begin() , v.end() , cmp) ;
        
        string ans = "" ; 
        for(int i = 0 ; i < v.size() ;i++)
        {
            while(v[i].second) 
            {
                ans += v[i].first ;
                v[i].second -- ; 
            }
        } 
        return ans ;
        
    }
};