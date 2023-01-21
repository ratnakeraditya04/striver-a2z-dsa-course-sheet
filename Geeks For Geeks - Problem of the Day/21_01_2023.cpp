#include <bits/stdc++.h>
using namespace std ;  

class Solution {
  public:
    int bitsCount(int a)
    {
        int cnt = 0 ;
        while(a > 0)
        {
            if(a % 2 == 1)
            {
                cnt ++ ; 
            }
            a = a / 2 ; 
        }
        return cnt ; 
    }
    int minVal(int a, int b) {
        int aCount = bitsCount(a) ; 
        int bCount = bitsCount(b) ; 
        
        if(aCount == bCount)
        {
            return a ; 
        }
        else if(aCount > bCount )
        {
            int diff = aCount - bCount ; 
            while(diff > 0)
            {
                a = a & (a - 1) ; 
                diff-- ; 
            }
            return a ; 
        }
        else if(aCount < bCount )
        {
            int diff = bCount - aCount ; 
            while(diff > 0)
            {
                a = a | (a + 1) ; 
                diff -- ; 
            }
            return a ;
        }
    }
};