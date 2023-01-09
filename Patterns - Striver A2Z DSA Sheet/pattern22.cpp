#include <bits/stdc++.h>
using namespace std ; 

class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i = 0 ; i < 2 * n - 1 ; i++)
        {
            for(int j = 0 ; j < 2 * n - 1 ; j++)
            {
                int left = j ; 
                int right = 2 * (n - 1) - j  ; 
                int top = i ; 
                int bottom = 2 * (n - 1) - i ; 
                
                cout << n - min(min(top, bottom) , min(left , right)) ; 
                cout << " " ; 
            }
            cout << endl ;
        }
        
    }
};