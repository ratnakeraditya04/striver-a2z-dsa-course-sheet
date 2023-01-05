#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        
        for(int i = 1 ; i <= n ; i++)
        {
            string s = "A";
            for(int j = 1 ; j <= i ; j++)
            {
                cout << s ; 
                s[0] += 1 ; 
            }
            cout << endl ; 
        }
    }
};