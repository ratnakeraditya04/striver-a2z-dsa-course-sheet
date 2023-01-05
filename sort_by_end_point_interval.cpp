#include <bits/stdc++.h>
using namespace std ; 
int i ; // Any index at which value you want to sort the data. 
static bool cmp(vector<int>& a, vector<int>& b)
{
    return a[i]< /*(Ascending Order) or >(Descending Order) */ b[i];
}
// i is the index at which the intervals will be sorted based on that point.