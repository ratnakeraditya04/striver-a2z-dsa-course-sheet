#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
        // code here
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = n - i - 1 ; j > 0 ; j--)
            {
                cout << " " ; 
            }
            for(int k = 0 ; k < 2 * i + 1 ; k++)
            {
                cout << "*" ; 
            }
            for(int l = n - i - 1 ; l > 0 ; l--)
            {
                cout << " " ; 
            }
            cout << endl ; 
        }
}