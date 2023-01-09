#include <bits/stdc++.h>
using namespace std ; 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 **/

class Solution {
public:
//  Method - 1 Recursive Solution - O(N) Time Complexity and O(N) Space Complexity 
//     void preOrder(TreeNode* root , vector<int> &v)
//     {
//        if(root != NULL)
//        {
//             v.push_back(root->val) ; 
//             preOrder(root->left , v) ; 
//             preOrder(root->right , v) ; 
        
//        }
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans ; 
//         preOrder(root , ans ) ; 
//         return ans ; 
        
//     }

//----------------------------------------------------------------------------------------------
// Method - 2 Iterative Approach - O(N) - Time Complexity and O(N) - Space Complexity     
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int> result ; 
        // if(root == NULL)
        // {
        //     return result ; 
        // }
        // stack<TreeNode*> st ; 
        // st.push(root) ; 
        // while(!st.empty())
        // {
        //     root = st.top() ; 
        //     st.pop() ; 

        //     if(root->right != NULL)
        //     {
        //         st.push(root->right) ; 
        //     }
        //     if(root->left != NULL)
        //     {
        //         st.push(root->left) ; 
        //     }
        //     result.push_back(root->val); 
        // }
        // return result ; 

        vector<int> result ; 
        if(root == NULL)
        {
            return result ; 
        }
        stack<TreeNode*> st ; 
        st.push(root) ; 
        while(!st.empty())
        {
            TreeNode* node = st.top() ; 
            st.pop() ;
            if(node->right != NULL)
            {
                st.push(node->right) ; 
            } 
            if(node->left != NULL)
            {
                st.push(node->left) ; 
            }
            result.push_back(node->val) ; 
        }
        return result ; 
    }
};