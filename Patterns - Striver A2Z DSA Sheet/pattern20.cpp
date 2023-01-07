#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j <= i ; j++)
            {
                cout << "*" ; 
            }
            for(int k = 0 ; k < 2 * (n - i - 1) ; k++)
            {
                cout << " " ; 
            }
            for(int l = 0 ; l <= i ; l++)
            {
                cout << "*" ; 
            }
            cout << endl ; 
        }
        for(int i = 1 ; i < n ; i++)
        {
            for(int j = n ; j > i ; j--)
            {
                cout << "*" ; 
            }
            for(int k = 0 ; k < 2 * i ; k++)
            {
                cout << " " ; 
            }
            for(int l = n ; l > i ; l--)
            {
                cout << "*" ; 
            }
            cout << endl;
        }
    }
};