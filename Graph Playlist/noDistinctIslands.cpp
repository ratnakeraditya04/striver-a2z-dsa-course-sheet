#include <bits/stdc++.h>
using namespace std ; 

class Solution {
  private: 
    void dfs(int row , int col ,vector<vector<int>>& grid , vector<vector<int>>& vis , vector<pair<int,int>>& vec , int row0 , int col0) 
    {
        vis[row][col] = 1 ;
        vec.push_back({row - row0 , col - col0}) ; 
        int n = grid.size() ; 
        int m = grid[0].size() ;
        int delrow[] = {-1 , 0 , +1 , 0} ; 
        int delcol[] = {0 , -1 , 0 , +1} ; 
        for(int i = 0 ; i < 4 ; i++)
        {
            int nrow = row + delrow[i] ; 
            int ncol = col + delcol[i] ; 
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
            && vis[nrow][ncol] == 0  && grid[nrow][ncol] == 1)
            {
                dfs(nrow ,ncol , grid , vis , vec , row0 , col0 ) ; 
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
// DFS Based Solution! 
        int n = grid.size() ; 
        int m = grid[0].size() ; 
        vector<vector<int>> vis(n , vector<int>(m , 0)) ;
        set<vector<pair<int,int>>> st ; 
        
        for(int i = 0;  i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(vis[i][j] == 0  && grid[i][j] == 1)
                {
                    vector<pair<int,int>> vec ;
                    dfs(i , j , grid , vis , vec , i , j) ; 
                    st.insert(vec) ; 
                }
            }
        }
        return st.size() ; 
    }
};





void bfs(int row , int col , vector<vector<int>> &vis , vector<vector<char>>&grid)
    {
        vis[row][col] = 1 ; 
        queue<pair<int, int>> q ;
        q.push({row , col}) ; 
        int n = grid.size() ; 
        int m = grid[0].size() ; 
        
        while(!q.empty())
        {
            int row = q.front().first ;
            int col = q.front().second ; 
            
            q.pop() ; 
            // Traverse the Neighbours and Mark it in visited.
            
            for(int delrow = -1 ; delrow <= 1 ; delrow++)
            {
                for(int delcol = -1 ; delcol <= 1 ; delcol++)
                {
                    int nrow = row + delrow ; 
                    int ncol = col + delcol ;
                    
                    if(nrow >= 0 && nrow < n && ncol < m && ncol >= 0 
                    && grid[nrow][ncol] == '1' && !vis[nrow][ncol] )
                    {
                        vis[nrow][ncol] = 1 ; 
                        q.push({nrow , ncol}) ; 
                    }
                }
            }
            
        }
    }

    // Function to find the number of islands.
    int numIslands(vector<vector<char>>&grid) {
        // Code here
        
        
        int n = grid.size() ; 
        int m = grid[0].size() ;    
        
        
        vector<vector<int>> vis(n , vector<int>(m,0)) ; 
        int cnt = 0 ; 
        
        for(int row = 0 ; row < n ; row ++) 
        {
            for(int col = 0 ; col < m ; col++)
            {
                if(!vis[row][col] && grid[row][col] == '1')
                {
                    cnt++ ; 
                    bfs(row , col , vis , grid) ; 
                }
            }
        }
        return cnt ; 
    }