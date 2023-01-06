#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        // code here
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
                cout << " ";
            }
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = i; j >= 1; j--)
            {
                cout << "*";
                cout << " ";
            }
            cout << endl;
        }
    }
    void nStarTriangle(int n)
    {
        // Write your code here.
        for (int i = 0; i < 2 * n + 1; i++)
        {
            int stars = i;
            if (i > n)
                stars = 2 * n - i;
            for (int j = 0; j < stars; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};