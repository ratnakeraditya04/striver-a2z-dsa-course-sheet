#include <bits/stdc++.h>
using namespace std ; 

// - My Failed Attempt.
class Solution {
public:
    double slope(int x1 , int y1 , int x2 , int y2)
    {
        if(x2 - x1 == 0 )
        {
            return 0 ;
        }
        return (double)((y2 - y1)/(x2 - x1)) ; 
    }
    int maxPoints(vector<vector<int>>& points) {
        if(points.size() == 1)
        {
            return 1 ; 
        }
        if(points.size() == 2)
        {
            return 2; 
        }
        int n = points.size() ; 
        map<pair<int,int> , double> mp ; 
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                double a = slope(points[i][0], points[i][1] , points[j][0], points[j][1]) ; 
                mp[{i , j}] = a ; 
            }
        }
        int cnt = 0 , maxi = 0 ;
        int i = 0 ; int j = i + 1 ; 
        while(i < points.size())
        {
            int k = mp[{i , j}] ; 
            int d = j + 1 ;
            int cntLoop = 0 ;
            cnt = 2 ;  
            while(cntLoop < n - 1)
            {
                if(points[d%n][1] = k * (points[d%n][0] - points[i][0]) + points[i][1] && k == mp[{i , d}])
                {
                    cnt++ ; 
                    maxi = max(cnt , maxi) ; 
                }
                d++ ; 
                cntLoop++; 
            }
            i++ ;

        }
        return maxi ; 
    }
};