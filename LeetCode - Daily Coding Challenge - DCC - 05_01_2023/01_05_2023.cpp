#include <bits/stdc++.h>
using namespace std ; 



class Solution {
public:
    double average(vector<int>& salary) {
// Method - 1 - O(N) - Time Complexity - Based Solution. 
        int b = salary[0] , a = salary[0] , sum = salary[0] ;
        for(int i = 1  ; i < salary.size() ; i ++)
        {
            if(salary[i] > a )
            {
                a = salary[i];
            }
            if(salary[i] < b )
            {
                b = salary[i];
            }
            sum = sum + salary[i]; 
        }
        // cout << sum << " " << a << "  " << b ;
        
        return (double)(sum - (a + b)) / (salary.size() - 2)  ;
        
        
        
        
// Method - 2 Using Sort Method - O(NlogN) Solution 
        
        // int sum = 0 ; 
        // sort(salary.begin()  , salary.end() );
        // for(int i = 0  ; i < salary.size() ; i ++)
        // {
        //    sum = sum + salary[i] ; 
        // }
        // return (sum - salary[0] - salary.back()) / salary.size() - 2   ;
        
        
// Method - 3 - Using C++ STL Class - Wrong Answer 
        
        // int mini = *min_element(salary.begin() , salary.end()) ; 
        // int maxi = *max_element(salary.begin() , salary.end()) ; 
        
        // int sum = accumulate(salary.begin() , salary.end() , 0) ; 
        
        
        // return float(sum - (mini + maxi))/ (salary.size() - 2 ) ; 
        
    }
};