#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
// Method - 1 - Similar to Merge Sort's Merge Function - O(N) - Time Complexity 
        
        // string s = "" ;
        
        // int i = 0 ;
        // int j = 0 ;
        
        // while(i < word1.size() && j < word2.size())
        // {
        //     s += word1[i] ;
        //     s += word2[j] ;
        //     i++ ; j++ ; 
        // }
        
        // while(i < word1.size())
        // {
        //     s += word1[i];
        //     i++ ; 
        // }
        // while(j < word2.size())
        // {   
        //     s += word2[j];
        //     j++ ;
        // }
        
        // return s ; 


// Another Attempt 

        string result = "";

        int i = 0 ; 
        int j = 0 ; 
        
        while(i < word1.size() || j < word2.size())
        {
            if(i < word1.size())
            {
                result.push_back(word1[i]) ; 
                i++ ;
            }

            if(j < word2.size())
            {
                result.push_back(word2[j]) ;
                j++ ; 
            }
        } 
        return result ;
        
        
    }
};