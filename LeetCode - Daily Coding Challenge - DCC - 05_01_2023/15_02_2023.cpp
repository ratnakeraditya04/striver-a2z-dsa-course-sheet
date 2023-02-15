#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {


// Method - 1 - Using conversion to number and adding k to the last. 
// O(N) - Time Complexity  
        // long long int a  = 0 ; 
        // for(int i = 0 ; i < num.size() ; i++)
        // {
        //     a = a * 10 + num[i] ; 
        // }
        // a = a + k ; 
        
        // vector<int> result ;
        // long long int b = 0 ; 
        // while(a)
        // {
            
        //     b = a  % 10 ; 
        //     result.push_back(b) ; 
        //     a = a / 10 ; 
        
        // }
        // reverse(result.begin() , result.end() ) ; 
        // return result ; 

// O(N) - Time Complexity - Standard Form - Solution from Discussion - Do a dry run. 

        for(int i = num.size() - 1 ; i >= 0 && k > 0 ; i--)
        {
            num[i] = num[i] + k ; 
            k = num[i] /10 ;
            num[i] = num[i] % 10 ;
        }
        while(k > 0)
        {
            num.insert(num.begin() , k%10 ); 
            k /= 10 ; 
        }
        return num ;
       
        
    }
};