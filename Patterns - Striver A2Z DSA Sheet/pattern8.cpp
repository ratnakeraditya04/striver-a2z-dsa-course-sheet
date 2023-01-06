#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                cout << " " ;    
            }
            for(int k = 2 * (n - i) - 1; k > 0  ;k--)
            {
                cout << "*" ; 
            }
            for(int l = 0 ; l < i ; l++)
            {
                cout << " " ; 
            }
            cout << endl ; 
       }
}