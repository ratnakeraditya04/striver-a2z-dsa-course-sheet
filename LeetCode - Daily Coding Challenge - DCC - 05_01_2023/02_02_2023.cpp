#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {


        map<char ,int> mp ; 
        for(int i = 0 ; i < 26; i++)
        {
            mp[order[i]] = i + 1 ; 
        }

        for(int i = 0 ; i < words.size() - 1; i++)
        {
            int a = 0 ;
            string b = words[i] ; 
            string c = words[i + 1] ;

            while(a < max(b.size() , c.size()))
            {
                if(mp[b[a]] == mp[c[a]])
                {
                    a++ ;
                    continue ; 
                }
                if(mp[b[a]] < mp[c[a]] )
                {
                    break ;
                }
                else if(mp[b[a]] > mp[c[a]] )
                {
                    return false ; 
                }
                a++ ; 
            }
        }
        return true ;

        
    }
};