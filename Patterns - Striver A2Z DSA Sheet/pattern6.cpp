#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    
	    
	    for(int i = 1 ; i <= n ; i++)
	    {
	        int a = 1 ; 
	        for(int j = n ; j >= i ; j--)
	        {
	            cout << a ;
	            a++ ; 
	            cout << " " ;
	        }
	        cout << endl ;
	    }
	}
};