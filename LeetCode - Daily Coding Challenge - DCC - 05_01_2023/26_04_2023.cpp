#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //     int digitSum(int num)
    //     {
    //         int sum = 0 ;
    //         while(num > 0)
    //         {
    //             sum += (num % 10 ) ;
    //             num = num / 10 ;

    //         }
    //         return sum ;
    //     }

    int addDigits(int num)
    {

        // Brute Force Solution - O(N^2) - Approach - Time Complexity
        //         while(num >= 10)
        //         {
        //             num = digitSum(num) ;
        //         }
        //         return num ;

        // Optimised Approach - O(1) - Time Complexity Approach - Digit Root Method

        if (num == 0)
        {
            return 0;
        }
        if (num % 9 == 0)
        {
            return 9;
        }
        else
        {
            return num % 9;
        }
    }
};