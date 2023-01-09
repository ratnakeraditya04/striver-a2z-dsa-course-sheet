#include <bits/stdc++.h>
using namespace std ; 
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < n - i - 1 ; j++)
            {
                cout << " " ; 
            }
            char ch = 'A' ;
            for(int k = 0 ; k < i + 1 ; k++)
            {
                cout << ch ; 
                ch++ ; 
            }
            ch-- ; 
            for(int l = 0 ; l <= i - 1 ; l++)
            {
                ch-- ; 
                cout << ch ; 

            }
            cout << endl ; 
        }
        
    }
};