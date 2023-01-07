#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
// Brute Force Solution - O(N^2) - Solution - Time Complexity. 
        // int i = 0 ; 
        // int j = 0 ;  
        // while(i < gas.size())
        // {
        //     if(gas[i] < cost[i])
        //     {
        //         i++; 
        //     }
        //     else if(gas[i] >= cost[i])
        //     {
        //         int myTank = gas[i] ;
        //         j = i ;   
        //         while(true)
        //         {
        //             myTank = myTank - cost[j] ;
        //             // cout << j << endl ;
        //             j++ ;
        //             if(j == cost.size())
        //             {
        //                 j = 0 ; 
        //             }
        //             if(j == i)
        //             {
        //                 return i ; 
        //             }
        //             myTank += gas[j] ; 
        //             if(myTank < cost[j])
        //             {
        //                 break ;
        //             } 
        //         }
        //         i++ ;
        //     }
        // }
        // return -1 ;
// Brute Force Solution - O(N^2) - Time Complexity - TLE

    // int n = cost.size() ; 

    // for(int i = 0 ; i < n ; i++)
    // {
    //     int totalFuel = 0 ; 
    //     int stopsCnt = 0 ;
    //     int j = i ; 
    //     while(stopsCnt < n )
    //     {
    //         totalFuel += gas[j % n] - cost[j % n] ; 
    //         if(totalFuel < 0 )
    //         {
    //             break ; 
    //         }
    //         stopsCnt++ ; 
    //         j++ ;
    //     } 
    //     if(totalFuel >= 0 && stopsCnt == n)
    //     {
    //         return i ; 
    //     }
    // }
    // return -1 ; 

// Optimised Solution - O(N) - Time Complexity 
        int n = cost.size() ; 
        int totalFuel = 0 ; 
        int fuel = 0 ;
        int start = 0 ; 
        for(int i = 0 ; i < n ;i ++)
        {
            totalFuel += gas[i] - cost[i] ;
            fuel += gas[i] - cost[i] ; 
            if(fuel < 0)
            {
                fuel = 0 ; 
                start = i + 1 ; 
            }
        }
        if(totalFuel < 0 ) 
        {
            return -1 ; 
        }
        return start ; 
        
    }
};