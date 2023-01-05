#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printSquare(int n)
    {
        // code here
        // Optimised Solution - O(N) - Time Complexity
        string s = "";
        for (int i = 1; i <= n; i++)
        {
            s += "*";
            if (i == n)
            {
                continue;
            }
            s += " ";
        }
        for (int i = 1; i <= n; i++)
        {
            cout << s << endl;
        }
    }
};