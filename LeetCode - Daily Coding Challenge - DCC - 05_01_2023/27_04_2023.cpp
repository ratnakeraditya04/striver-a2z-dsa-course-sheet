#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int bulbSwitch(int n) {
        
        int cnt = 0 ; 
        for(int i = 0 ; i * i <= n ; i++)
        {
            cnt++ ;
        }
        return cnt - 1; 
        
    }
};