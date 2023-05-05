#include <bits/stdc++.h>
using namespace std ; 



class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0 ; 
        int mx = INT_MIN ; 
        int cnt = 0 ;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                cnt++ ; 
            }
            if(i >= k)
            {
                
                if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u')
                {
                    cnt-- ; 
                }
                left++ ; 

            }
            mx = max(mx , cnt) ;
        }
        return mx ; 
    }
};