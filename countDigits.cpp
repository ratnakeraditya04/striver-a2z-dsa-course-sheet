#include <bits/stdc++.h>
int countDigits(int n){
    //write your code here
    int temp = n ; 
    int cnt = 0 ; 
    while(temp > 0 )
    {
        cnt++ ; 
        int rem = temp % 10 ; 
        temp = temp / 10 ; 
    }
    return cnt; 
}
