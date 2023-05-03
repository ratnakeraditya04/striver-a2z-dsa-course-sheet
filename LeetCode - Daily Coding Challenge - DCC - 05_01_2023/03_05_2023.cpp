#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        set<int> st1 ; 
        set<int> st2 ; 

        for(int i = 0 ; i < nums1.size() ; i++)
        {
            st1.insert(nums1[i]); 
        }

        for(int i = 0 ; i < nums2.size() ; i++)
        {
            st2.insert(nums2[i]); 
        }


        vector<int> distinct1 ; 
        for(auto a : st1)
        {
            if(st2.find(a) == st2.end())
            {
                distinct1.push_back(a) ;
            }
        }

        vector<int> distinct2 ; 
        for(auto a : st2) 
        {
            if(st1.find(a) == st1.end())
            {
                distinct2.push_back(a); 
            }
        }

        return {distinct1 , distinct2} ;


        
    }
};