#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int a = 1 ; 
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= i ; j++)
            {
                if((i + j)% 2 == 0)
                {
                    cout << 1 ; 
                }
                else
                {
                    cout << 0 ; 
                }
                cout << " " ; 
            }
            cout << endl ; 
        }
    }
};