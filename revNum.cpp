#include <bits/stdc++.h> 

int reverseNumber(int n)
{
    int revNum = 0 ;
    while(n > 0)
    {
        int digit = n % 10 ; 
        revNum = revNum * 10 + digit ;
    }
    return revNum ; 

}