#include <bits/stdc++.h>
using namespace std ; 



class Solution {
public:
    bool bfs(int start , vector<int>& col, vector<vector<int>>& graph)
    {
        queue<int> q ; 
        q.push(start); 
        col[start] = 1 ; 

        while(!q.empty())
        {
            int node = q.front() ;
            q.pop() ;

            for(auto it : graph[node])
            {
                if(col[it] == 0)
                {
                    col[it] = -1 * col[node] ;
                    q.push(it) ;
                }
                else
                {
                    if(col[it] == col[node])
                    {
                        return false ;
                    }
                }
            }
        }
        return true ;
    }
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size() ;
        vector<int> col(n , 0) ;
        for(int i = 0 ; i < graph.size() ; i++)
        {
            if(col[i] == 0 )
            {
                if(bfs(i , col , graph) == false)
                {
                    return false ;
                }
            }
        }
        return true ;
        
    }
};