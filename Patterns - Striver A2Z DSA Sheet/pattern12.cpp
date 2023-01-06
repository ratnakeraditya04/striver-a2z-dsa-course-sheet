#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i = 1 ; i <= n ; i++)
        {
            int a = 1; 
            for(int j = 0 ; j < i ; j++)
            {
                cout << a ;
                cout << " " ;
                a++ ; 
            }
            
            for(int k = 0 ; k < 2 * n - 2 * i ; k++)
            {
                cout << "  " ; 
            }
            a-- ; 
            for(int l = 0 ; l < i ; l ++)
            {
                cout << a ;
                cout << " " ; 
                a-- ;
                
            }
            cout << endl ;
        }
    }
};