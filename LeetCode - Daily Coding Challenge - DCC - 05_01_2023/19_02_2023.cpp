#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result ;
         
        if(root == NULL)
        {
            return result ;
        }
        queue<TreeNode*> q ; 
        q.push(root) ; 
        int cnt = 0 ; 

        while(!q.empty())
        {
            int size = q.size() ;
            vector<int> level ; 
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode* temp = q.front() ; 
                q.pop() ; 
                if(temp->left != NULL)
                {
                    q.push(temp->left) ;
                }
                if(temp->right != NULL)
                {
                    q.push(temp->right) ; 
                }
                level.push_back(temp->val); 
            }
            cnt++ ; 
            if(cnt % 2 == 0)
            {
                reverse(level.begin() , level.end()) ;
                result.push_back(level) ;
            }
            else
            {
                result.push_back(level) ;
            }
        }
        return result ; 

    }
};