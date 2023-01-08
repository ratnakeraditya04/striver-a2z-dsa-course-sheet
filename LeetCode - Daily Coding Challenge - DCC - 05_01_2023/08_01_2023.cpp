#include <bits/stdc++.h>
using namespace std;

// My Failed Attempt - I tried my sincere best to solve this problem but was unable to do so.
// class Solution {
// public:
//     double slope(int x1 , int y1 , int x2 , int y2)
//     {
//         if(x2 - x1 == 0 )
//         {
//             return 0 ;
//         }
//         return (double)((y2 - y1)/(x2 - x1)) ;
//     }
//     int maxPoints(vector<vector<int>>& points) {
//         if(points.size() == 1)
//         {
//             return 1 ;
//         }
//         if(points.size() == 2)
//         {
//             return 2;
//         }
//         int n = points.size() ;
//         map<pair<int,int> , double> mp ;
//         for(int i = 0 ; i < n ; i++)
//         {
//             for(int j = i + 1 ; j < n ; j++)
//             {
//                 double a = slope(points[i][0], points[i][1] , points[j][0], points[j][1]) ;
//                 mp[{i , j}] = a ;
//             }
//         }
//         int cnt = 0 , maxi = 0 ;
//         int i = 0 ; int j = i + 1 ;
//         while(i < points.size())
//         {
//             int k = mp[{i , j}] ;
//             int d = j + 1 ;
//             int cntLoop = 0 ;
//             cnt = 2 ;
//             while(cntLoop < n - 1)
//             {
//                 if(points[d%n][1] = k * (points[d%n][0] - points[i][0]) + points[i][1] && k == mp[{i , d}])
//                 {
//                     cnt++ ;
//                     maxi = max(cnt , maxi) ;
//                 }
//                 d++ ;
//                 cntLoop++;
//             }
//             i++ ;
//         }
//         return maxi ;
//     }
// };


// Actual Solution - O(N^2) - Time Complexity 
// Actually, the point is select one point and for that point calculate slope for all other points related to that point. 
// Store it in a data structure. Here, the perfect data structure would be an unordered map. Store it in. Also handle explicitly the case where denominator of slope  is equal to 0. 
// Initiate result as 0 and then add 1 to it for the point itself. 


class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size() == 1)
        {
            return 1 ; 
        }
        int result = 0 ; 
        int n = points.size() ; 
        for(int i = 0 ; i < n ; i++)
        {
            unordered_map<double,int> mp  ;
            double slope = 0.0; 

            for(int j = 0 ; j < n ; j++)
            {
                int x1 = points[i][0] ; 
                int x2 = points[j][0] ; 
                int y1 = points[i][1] ; 
                int y2 = points[j][1] ; 

                int dy = y2 - y1 ; 
                int dx = x2 - x1 ; 

                if(dx != 0 )
                {
                    slope = (double)dy/dx ; 
                }
                else 
                {
                    slope = INT_MAX; 
                }
                if(i != j )
                {
                    mp[slope]++ ; 
                }
            }
            
            if(mp.empty() == false )
            {
                for(auto a : mp)
                {
                    result = max(result , a.second + 1) ; 
                }
            }
        }
        return result ; 
    }
};
