#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

// My Approach - Failed One. 
        // int start = newInterval[0] ; 
        // int end = newInterval[1] ; 
        
        // int n = intervals.size() ;


        // vector<vector<int>> result ; 
        // if(intervals.size() == 0)
        // {
        //     result.push_back(newInterval) ;
        //     return result ;
        // }
        // for(int i = 0 ; i < n ; i++)
        // {

        //     if(start >= intervals[i][0] && start <= intervals[i][1])
        //     {
        //         if(end <= intervals[i][1])
        //         {
        //             vector<int> temp ; 
        //             temp.push_back(intervals[i][0]);
        //             temp.push_back(intervals[i][1]);

        //             result.push_back(temp) ;
        //         }
        //         else 
        //         {
        //             if(end > intervals[n - 1][1])
        //             {
        //                 vector<int> temp ; 
        //                 temp.push_back(intervals[i][0]);
        //                 temp.push_back(end) ;
        //                 result.push_back(temp); 
        //                 break; 
        //             }
        //             int j = i + 1; 
        //             while(j < n)
        //             {
        //                 if(end > intervals[j][1])
        //                 {
        //                     j++ ;
        //                 }
        //                 else if(end >= intervals[j][0] && end <= intervals[j][1])
        //                 {
        //                     vector<int> temp ; 
        //                     temp.push_back(intervals[i][0]);
        //                     temp.push_back(intervals[j][1]) ;
        //                     result.push_back(temp); 
        //                     i = j ;
        //                     break;                           
        //                 }
        //                 else if(end < intervals[j][0] && end >= intervals[i][1])
        //                 {
        //                     vector<int> temp ; 
        //                     temp.push_back(intervals[i][0]);
        //                     temp.push_back(end) ;
        //                     result.push_back(temp);
        //                     break ;
        //                 }
        //                 else
        //                 {
        //                     vector<int> temp ; 
        //                     temp.push_back(intervals[i][0]);
        //                     temp.push_back(end) ;
        //                     result.push_back(temp); 
        //                     i = j ;  
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        //     else if(start <= intervals[i][0] && end <= intervals[i][1])
        //     {
        //         vector<int> temp ;
        //         temp.push_back(intervals[i][0]) ; 
        //         temp.push_back(intervals[i][1]) ;
        //         result.push_back(temp) ;
        //     }
        //     else if(start < intervals[i][0] && end < intervals[i][0])
        //     {
        //         vector<int> temp ; 
        //         temp.push_back(start) ;
        //         temp.push_back(end) ;

        //         result.push_back(temp) ;
        //     }
        //     else if(start > intervals[n - 1][1])
        //     {
        //         vector<int> temp ; 
        //         temp.push_back(start) ;
        //         temp.push_back(end) ;

        //         result.push_back(temp); 
        //     }
        //     else 
        //     {
        //         vector<int>temp; 
        //         temp.push_back(intervals[i][0]);
        //         temp.push_back(intervals[i][1]); 

        //         result.push_back(temp) ;
        //     }
        // }
        // return result ; 


// Brute Force Solution - O(NlogN + N) - Time Complexity Based Solution 

        // vector<vector<int>> result ; 
        // if(intervals.size() == 0)
        // {
        //     result.push_back(newInterval) ;
        //     return result ; 
        // }

        // intervals.push_back(newInterval) ; 
        // sort(intervals.begin() , intervals.end()) ; 

        // vector<int> temp = intervals[0] ; 

        // for(int i = 1 ; i < intervals.size() ; i++)
        // {
        //     if(temp[1] >= intervals[i][0])
        //     {
        //         temp[1] = max(intervals[i][1] , temp[1]) ; 
        //     }
        //     else 
        //     {
        //         result.push_back(temp) ; 
        //         temp = intervals[i] ; 
        //     }
        // }
        // result.push_back(temp) ;
        // return result ;

// Optimised Solution - O(N) - Based Solution 

        vector<vector<int>> result ; 
        for(auto it : intervals)
        {
            if(newInterval[1] < it[0])
            {
                result.push_back(newInterval) ;
                newInterval = it ; 
            }
            else if(newInterval[0] > it[1] )
            {
                result.push_back(it) ;
            }
            else
            {
                newInterval[0] = min(it[0] , newInterval[0]) ; 
                newInterval[1] = max(it[1] , newInterval[1]) ; 
            }
        }
        result.push_back(newInterval) ; 

        return result ;

    }
};