#include <bits/stdc++.h>
using namespace std; 
class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
// Using Data Structures - String and Sorting - O(NlogN) - Time Complexity 
        string lower = "" ; 
        string higher = "" ; 
        
        for(int i =  0 ; i < str.size() ; i++)
        {
            if(str[i] >= 97 && str[i] <= 122)
            {
                lower += str[i] ; 
            }
            if(str[i] <= 90 && str[i] >= 65)
            {
                higher += str[i] ;
            }
        }
        sort(lower.begin() , lower.end()); 
        sort(higher.begin() , higher.end()); 
        
        string answer = "" ; 
        int k = 0 ; 
        int l = 0 ; 
        for(int i = 0 ; i < str.size() ; i++)
        {
            if(str[i] <= 122 && str[i] >= 97)
            {
                answer += lower[k] ; 
                k++ ; 
            }
            if(str[i] >= 65 && str[i] <= 90)
            {
                answer += higher[l]; 
                l++ ; 
            }
        }
        return answer ;
        
    }
};