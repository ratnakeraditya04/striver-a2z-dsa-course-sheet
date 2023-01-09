#include <bits/stdc++.h>
using namespace std ; 

class Solution {
    public :
    vector<int> preinpost(Node * root)
    {
        vector<int> pre ,in , post ; 
        if(root == NULL)
        {
            return pre ; 
        }
        stack<pair<Node* ,int>> st ; 
        st.push({root ,1}) ; 
        while(!st.empty())
        {
            Node* it = st.top();
            st.pop() ; 

            if(it.second == 1)
            {
                pre.push_back(it.first->val) ; 
                it.second++ ; 
                st.push(it) ; 

                if(it.first->left != NULL)
                {
                    st.push({it.first->left , 1}) ; 
                }
            } 
            else if(it.second == 2)
            {
                in.push_back(it.first->val) ; 
                it.second++ ; 
                st.push(it) ; 

                if(it.first->right != NULL)
                {
                    st.push({it.first->right , 1 }) ; 
                }
            }
            else
            {
                post.push(it.first->val) ; 
            }
        }
        return pre ; 
        return post ; 
        return in ; 
    }

};