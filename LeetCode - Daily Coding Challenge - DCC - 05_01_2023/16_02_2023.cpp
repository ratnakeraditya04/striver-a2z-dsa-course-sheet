#include <bits/stdc++.h>
using namespace std ; 
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

    int maxDepth(TreeNode* root) {
        

// Recursion Based Solution
    //    if(root == NULL)
    //    {
    //        return 0 ; 
    //    }
    //    return max(maxDepth(root->left ), maxDepth(root->right)) + 1 ; 

// Iterative Based Solution 

        int cnt = 0 ; 
        if(root == NULL)
        {
            return 0 ; 
        }
        queue<TreeNode*> q ; 
        q.push(root) ; 
        while(!q.empty())
        {
            int size = q.size() ; 
            cnt++ ; 
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode* node = q.front();  
                q.pop() ; 

                if(node->left != NULL)
                {
                    q.push(node->left) ; 
                }
                if(node->right != NULL)
                {
                    q.push(node->right) ; 
                }
            }
        }
        return cnt ; 
    }
};