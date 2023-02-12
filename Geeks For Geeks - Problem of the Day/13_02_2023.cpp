#include <bits/stdc++.h>
using namespace std ;
class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(C == 0)
        {
            if(A == B)
            {
                return 1 ; 
            }
            else
            {
                return 0 ; 
            }
        }
        
        if((B - A) % C == 0)
        {
            if((B - A) / C >= 0 )
            {
                return 1 ;
            }
        }
        return 0 ;
    }
};