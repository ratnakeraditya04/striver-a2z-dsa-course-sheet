#include <bits/stdc++.h>
using namespace std ; 
class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        if(A == B) 
        {
            return 1 ;
        }
        else if(A.size() > B.size())
        {
            for(int i = 0 ; i < A.size() - B.size(); i++)
            {
                if(A.substr(i , B.size()) == B)
                {
                    return 1 ; 
                }
            }
            string ans = A ;
            for(int i = 0 ; i < A.size() ; i++)
            {
                ans += A[i] ;
            }
            for(int i = 0 ; i < ans.size() - B.size(); i++)
            {
                if(ans.substr(i , B.size()) == B)
                {
                    return 2 ; 
                }
            }
        }
        else if(A.size() <= B.size())
        {
            int k = B.size()/A.size() ;
            
            if(B.size() % A.size() != 0 )
            {
                k++; 
            }
            string ans = "" ;
            int temp = k ; 
            
            while(k > 0)
            {
                for(int i = 0 ; i < A.size() ; i++)
                {
                    ans += A[i] ;
                }
                k-- ;
            }
            for(int i = 0 ; i <= ans.size() - B.size(); i++)
            {
                if(ans.substr(i , B.size()) == B) 
                {
                    return temp ; 
                }
            }
            temp++ ; 
            for(int i = 0 ; i < A.size() ; i++)
            {
                ans += A[i]; 
            }
            
            for(int i = 0 ; i <= ans.size() - B.size(); i++)
            {
                if(ans.substr(i , B.size()) == B)
                {
                    return temp ; 
                }
            }
  
        } 
        return -1 ;
        
    }
};