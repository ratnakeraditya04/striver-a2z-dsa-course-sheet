#include <bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
// Standard Method to Solve this problem. 
        
// Algorithm - 
// Step - 1 - Define four variables left, right, top and bottom. 
        
    vector <int> res ; 
        int left = 0 ; 
        int right = matrix[0].size() - 1 ;
        int top = 0 ; 
        int bottom = matrix.size() - 1 ;
        
        if(matrix[0].size() == 0 || matrix.size() == 0 )
        {
            return {} ; 
        }
        
 // Start traversing left->right , top->bottom , right->left , bottom->top     
            
           while(top <= bottom && left <= right )
           {
               
           
                for(int i = left ; i <= right ; i++)
                {
                   res.push_back(matrix[top][i]) ; 
                    
                }
                top++ ;
                    
        
                for(int i = top ; i <= bottom ; i++ )
                {
                    res.push_back(matrix[i][right]) ; 
                    
                }
                right-- ;
        
         
 // Additional Conditional for Checking while checking for repeated printing of element while changing row      
            if(top <= bottom)
            {
                
            
                    for(int i = right ; i >= left ; i-- )
                    {
                        res.push_back(matrix[bottom][i]) ; 
                    }
                    bottom -- ; 
            }
        
// Additional Conditional for Checking while checking for repeated printing of element while changing row         
            if(left <= right )
            {
                    for(int i = bottom  ; i >= top ; i-- )
                    {
                        res.push_back(matrix[i][left]) ; 
                    }
                    left++ ; 
            }
        }
        return res ; 
    }
};