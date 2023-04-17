#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        // Method -1

        //         int max = candies[0] ;
        //         for(int i = 0; i < candies.size() ; i++ )
        //         {
        //             if(candies[i] > max )
        //             {
        //                 max = candies[i] ;
        //             }
        //         }
        //         // cout << max << endl ;
        //         vector <bool> result ;
        //         for(int j = 0 ; j < candies.size() ; j++)
        //         {
        //             bool a  = false ;
        //             if(extraCandies + candies[j] >=  max )
        //             {
        //                 a = true ;
        //             }
        //             else
        //             {
        //                 a = false ;
        //             }
        //             result.push_back(a) ;
        //         }
        //        return result ;

        // Attempting Again
        int n = candies.size();

        vector<bool> result;
        int mx = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < n; i++)
        {
            if (extraCandies + candies[i] >= mx)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};