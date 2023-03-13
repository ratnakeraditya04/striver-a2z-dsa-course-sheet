#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    
// Method - 1 - Stack Class Solution 
// bool matching(char a , char b )
// {
//     return ((a== '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}')) ; 
// }
//     bool isValid(string s) {
        
//         stack<char> sta ;
        
//         for(int i = 0 ; i < s.size() ; i++) // for(auto char x : s) ; 
//         {
//             if(s[i] == '(' || s[i] == '{' || s[i] == '[')
//             {
//                 sta.push(s[i]) ; 
//             }
//             else
//             {
//                 if(sta.empty() == false)
//                 {
//                     return false ;
//                 }
//                 if(matching(sta.top() , s[i] ) == false )
//                 {
//                     return false ; 
//                 }
//                 else
//                 {
//                     sta.pop() ; 
//                 }
//             }
//         }
//         return (sta.empty() == true ); 
    
// Method - 2 - Stack  Based Solution - O(N) - Time Complexity and O(N) - Space Complexity 
//     bool isValid(string s) {
//     stack<char> check ; 
//     for(auto c :s)
//     {
//         if(c == '[' || c == '{' || c == '(')
//         {
//             check.push(c) ; 
//         }
        
//         if(c == ')' && check.top() == '(' && check.size() > 0) check.pop() ; 
//         if(c == '}' && check.top() == '{' && check.size() > 0) check.pop() ; 
//         if(c == ']' && check.top() == '[' && check.size() > 0) check.pop() ;
        
//     }
//         if(check.empty()) return true ;
//         return false ; 
        
//     }
    
    bool isValid(string s) {
        // stack<char> st;  //taking stack for keep tracking the order of the brackets..
        // for(auto i:s)  //iterate over each and every elements
        // {
        //     if(i=='(' or i=='{' or i=='[') st.push(i);  //if current element of the string will be opening bracket then we will just simply push it into the stack
        //     else  //if control comes to else part, it means that current element is a closing bracket, so check two conditions  current element matches with top of the stack and the stack must not be empty...
        //     {
        //         if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
        //         st.pop();  //if control reaches to that line, it means we have got the right pair of brackets, so just pop it.
        //     }
        // }
        // return st.empty();  //at last, it may possible that we left something into the stack unpair so return checking stack is empty or not..


// My Another Attempt at Solving this Problem -
// Time Complexity - O(N) - Time Complexity and O(N) - Space Complexity

        stack<char> st ; 

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty() && ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']')))
                {
                    st.pop(); 
                }
                else 
                {
                    return false; 
                }
            }
        }
        if(st.empty() == true)
        {
            return true ;
        }
        return false ; 
    }
};