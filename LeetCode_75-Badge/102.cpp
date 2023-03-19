#include <bits/stdc++.h>
using namespace std; 


//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {      
// Method - Using Queue Data Structure - Theta(N) - N - Number of Nodes.
        // vector<vector<int>> result ; 
        // if(root == NULL)
        // {
        //     return result ; 
        // }
        // queue<TreeNode*> q ; 
        // q.push(root) ; 
        // while(!q.empty())
        // {
        //     int size = q.size() ; 
        //     vector<int> level ; 
        //     for(int i = 0 ; i < size ; i++)
        //     {
        //         TreeNode* node = q.front() ; 
        //         q.pop() ; 
        //         level.push_back(node->val) ;
        //         if(node->left != NULL)
        //         {
        //             q.push(node->left) ; 
        //         } 
        //         if(node->right != NULL)
        //         {
        //             q.push(node->right) ; 
        //         }
        //     }
        //     result.push_back(level) ; 
        // }
        // return result ;
        
        
// Method - 2 Using Constructed Height Function of Tree and Printing nodes at distance k from the root.
// Attempt - Again 

        vector<vector<int>> result; 
        if(root == NULL)
        {
            return result ;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            vector<int> ans ;  
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode* node = q.front();
                q.pop(); 

                ans.push_back(node->val);
                if(node->left != NULL)
                {
                    q.push(node->left) ;
                }
                if(node->right != NULL)
                {
                    q.push(node->right);
                }
            }
            result.push_back(ans);
        }
        return result ;
        
    }
};