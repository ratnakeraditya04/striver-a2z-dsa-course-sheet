#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    
	    
	    for(int i = 1 ; i <= n ; i++)
	    {
	        for(int j = n ; j >= i ; j-- )
	        {
	            cout << "*" ; 
	            cout << " " ; 
	        }
	        cout << endl ; 
	    }
	}
};