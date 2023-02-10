#include <bits/stdc++.h>
using namespace std; 
class Solution{
public:
    int maxInstance(string s){
        unordered_map<char ,int> mp ; 
        for(int i = 0 ; i < s.size() ; i++)
        {
            mp[s[i]]++ ;
        }
        int k = 0; 
        
        if(mp.find('b') == mp.end() || mp.find('a') == mp.end() || mp.find('l') == mp.end() || mp.find('o') == mp.end() || mp.find('n') == mp.end() || mp['l']  == 1 || mp['o'] == 1)
        {
            return 0 ; 
        }
        if(mp.find('b') != mp.end() && mp.find('a') != mp.end() && mp.find('l') !=  mp.end() && mp.find('o') != mp.end() && mp.find('n') != mp.end())
        {
            k = min(min(min(mp['a'] , mp['b']) , min(mp['n'] , mp['o']/2)) , mp['l']/2) ; 
        }
        return k ;
    }
};