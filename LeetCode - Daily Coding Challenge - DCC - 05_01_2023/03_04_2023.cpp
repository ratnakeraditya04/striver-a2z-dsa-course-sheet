#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
// After an hour of futile attempt, it's time to see the solution. 
        // sort(people.begin() , people.end(), greater<int>()); 

        // int cnt = 0 ; 
        // int i = 0; 
        // while(i < people.size())
        // {
        //     if(people[i] == limit)
        //     {
        //         cnt++ ;
        //         i++ ; 
        //     }
        //     else if(i < people.size() - 1 && people[i] + people[i + 1] <= limit)
        //     {
        //         cnt++ ;
        //         i+= 2 ;
        //     }
        //     else if(i < people.size() - 1 && people[i] + people[i + 1] > limit)
        //     {
        //         cnt++ ;
        //         i++ ;
        //     } 
        //     else if(i == people.size() - 1 && people[i] <= limit)
        //     {
        //         cnt++; 
        //         i++ ; 
        //     }
        //     else
        //     {
        //         i++; 
        //     }
        // }
        // return cnt ; 
// Easiest Solution Ever - Pairing of Heaviest with Lightest Man with fulfill our purpose. 

        sort(people.begin() , people.end()); 
        int i = 0 ; 
        int j = people.size() - 1 ; 
        int cnt = 0 ; 
        while(i <= j)
        {
            if(people[i] + people[j] <= limit)
            {
                
                i++ ;
            }
            j-- ; 
            cnt++ ; 
        }
        return cnt ;
    }
};