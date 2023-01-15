#include <bits/stdc++.h>
using namespace std ; 

int gcd(int a,int b)
{
	//Write your code here
    int result = 0 ; 
    while(a > 0 && b > 0)
    {
        if(a > b) a = a % b ; 
        else b = b % a ; 
    }
    if(a == 0) return b ; 
    return a ; 
}

