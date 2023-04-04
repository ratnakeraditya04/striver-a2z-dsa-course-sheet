#include <bits/stdc++.h>
using namespace std ; 



int minSteps(string s)
{
    // Write your code here.

    int acount = 0;
    int bcount = 0;

    char prev = '*';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == prev)
        {
            continue;
        }
        if (s[i] == 'a')
        {
            acount++;
        }
        else
        {
            bcount++;
        }
        prev = s[i];
    }
    return min(acount, bcount) + 1;
}