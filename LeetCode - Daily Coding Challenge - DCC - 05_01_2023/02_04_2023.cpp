#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
// O(N^2) - Time Complexity - Brute Force Complexity  
//         vector<int> result; 
//         for(int i = 0 ;i < spells.size() ; i++)
//         {g
//             int cnt = 0 ;
//             for(int j = 0 ;j < potions.size() ;j++)
//             {
// // Signed Integer Overflow Error. 
//                 long long int k = spells[i] *potions[j] ; 
//                 if(k >= success )
//                 {
//                     cnt++ ; 
//                 }
//             }
//             result.push_back(cnt) ; 
//         }
//         return result; 

// Slight Optimizaton - Time Limit Exceeded Error - TLE
        // vector<int> result ; 
        // int n = spells.size() ;
        // int m = potions.size() ;
        
        // sort(potions.begin() , potions.end()) ; 
        // for(int i = 0 ; i < n ; i++)
        // {
        //     if(spells[i] >= success)
        //     {
        //         result.push_back(m);
        //     }
        //     else
        //     {
        //         int cnt = 0 ;
        //         for(int j = 0 ; j < m ; j++)
        //         {
        //             if((float)potions[j] >= (float)((float)success/(float)spells[i]))
        //             {
        //                 cnt += (m - j);
        //                 break ;
        //             }
        //         }
        //         result.push_back(cnt) ;
        //     }
        // }   
        // return result; 


// Optimised Solution - 

// Using Binary Search 
        int n = spells.size() ;
        int m = potions.size() ; 
        vector<int> result(n , 0); 

        sort(potions.begin(), potions.end()); 

        for(int i = 0 ; i < n ; i++)
        {
            int l = 0; 
            int h = m - 1 ;


            while(l <= h)
            {
                int mid = l + (h - l)/2 ; 

                if((long long int) spells[i] * (long long int) potions[mid] >= success)
                {
                    h = mid - 1 ; 
                    
                }
                else
                {
                    l = mid + 1 ; 
                }
            }
            result[i] = m - l; 
        }
        return result ;
    }
};