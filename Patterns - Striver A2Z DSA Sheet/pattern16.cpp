#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        string s = "A" ; 
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= i ; j++)
            {
                cout << s ; 
            }
            cout << endl ;
            s[0] += 1 ; 
        }
    }
};