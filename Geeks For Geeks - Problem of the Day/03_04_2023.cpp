#include <bits/stdc++.h>
using namespace std; 
class Solution
{

public:
    int xmod11(string x)
    {
       // code here
    //   int sumOdd = 0 ;
    //   int sumEven = 0 ; 
    //   for(int i = 0 ; i < x.size() ;i++)
    //   {
    //       if(i % 2 == 1)
    //       {
    //         //   cout <<(x[i] - '0') << endl ;
    //           sumOdd += (x[i] - '0'); 
    //       }
    //       else
    //       {
    //           sumEven += (x[i] - '0') ; 
    //       }
    //   }
    //   if(sumEven >= sumOdd)
    //   {
    //       return 11 - (sumEven - sumOdd) % 11 ; 
    //   }
    //   return (sumOdd - sumEven) % 11 ;
    

// Solution - O(N) - Time Complexity Based Solution 
    int res = 0 ; 
    for(int i = 0 ; i < x.size(); i++)
    {
        res = (res * 10 + (x[i] - '0')) % 11; 
    }
    return res; 
    
    
    }
};