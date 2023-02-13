#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        

        
// Method - 1 Using O(N) - Time Complexity - Time Limit Exceeded 
//     int count = 0 ;
//     for( int i = low ; i <= high ; i++)
//     { 
//         if( i % 2 == 1 ){
//             count++ ;
//         }
//     }    
//     return count;
    
    
// Method - 2 - Using O(1) - Time Complexity 
        if(high % 2 == 1 && low % 2 == 1)
        {
         return (high  - low)/ 2 + 1 ;
        }
        else if(high % 2 == 0 && low % 2 == 0)
        {
            return (high  - low )/ 2 ;
        }
        else
        {
            return (high  - low )/ 2 + 1 ; 
        }

        }
};