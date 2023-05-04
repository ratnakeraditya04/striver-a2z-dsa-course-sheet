#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        // int cntR = 0 ;
        // int cntD = 0 ;

        // for(int i =  0 ;  i < senate.size() ; i++)
        // {
        //     if(senate[i] == 'D')
        //     {
        //         cntD ++ ;
        //     }
        //     if(senate[i] == 'R')
        //     {
        //         cntR++ ;
        //     }
        // }

        // if(abs(cntD - cntR) >= 1)
        // {
        //     if(cntD > cntR)
        //     {
        //         return "Dire" ;
        //     }
        //     else
        //     {
        //         return "Radiant" ;
        //     }

        // }
        // if(cntD == cntR)
        // {
        //     if(senate[0] == senate[senate.size() - 1])
        //     {
        //         if(senate[0] == 'D')
        //         {
        //             return "Dire";
        //         }
        //         else
        //         {
        //             return "Radiant";
        //         }
        //     }
        //     else
        //     {
        //         if(senate[0] == 'D')
        //         {
        //             return "Dire";
        //         }
        //         else
        //         {
        //             return "Radiant" ;
        //         }
        //     }
        // }

        // return "ABC" ;

        queue<int> rq, dq;

        for (int i = 0; i < senate.size(); i++)
            senate[i] == 'R' ? rq.push(i) : dq.push(i);

        int a, b;
        while (!rq.empty() and !dq.empty())
        {
            a = rq.front(), b = dq.front();
            rq.pop(), dq.pop();
            if (a < b) // taking min and pushing it to queue again
                rq.push(a + senate.size());
            else
                dq.push(b + senate.size());
        }

        if (rq.size() > dq.size())
            return "Radiant";
        else
            return "Dire";
    }
};