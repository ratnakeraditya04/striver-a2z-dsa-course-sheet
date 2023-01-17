#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cntOne = 0 ; 
        int cntFlip = 0 ;

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '1')
            {
                cntOne++ ; 
            }
            if(s[i] == '0')
            {
                if(cntOne > 0)
                {
                    cntFlip++ ; 
                }
            }

            if(cntOne  < cntFlip)
            {
                cntFlip = cntOne ; 
            }
        }

        return cntFlip ; 

    }
};