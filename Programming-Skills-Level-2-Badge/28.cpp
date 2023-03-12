#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int strStr(string haystack, string needle) {

// O(N^2) - Time Complexity - Using SubString as its Object. 

        // if(haystack.size() == needle.size() && haystack == needle)
        // {
        //     return 0 ;
        // }
        // for(int i = 0 ; i < haystack.size() ; i++ )
        // {
        //     if(haystack.substr(i , needle.size()) == needle)
        //     {
        //         return i ; 
        //     }
        // }
        // return -1 ; 
        
// Standard Implementation - STL C++. 
//         size_t found = haystack.find(needle) ; 
//         if(found == string::npos)
//         {
//             return -1 ; 
//         }
//         return found ; 

// Attempted Again

        for(int i = 0 ; i < haystack.size() ; i++)
        {
            if(haystack.substr(i, needle.size()) == needle)
            {
                return i ; 
            }
        }
        return -1 ; 
    }
};