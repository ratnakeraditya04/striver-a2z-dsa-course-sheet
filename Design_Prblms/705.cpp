#include <bits/stdc++.h>
using namespace std; 

//  Approach - 1 
class MyHashSet {
private:
    set<int> st ; 
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        st.insert(key) ;
    }
    
    void remove(int key) {
        st.erase(key) ;
    }
    
    bool contains(int key) {
        if(st.count(key))
        {
            return true; 
        }
        return false ;
    }
};

// Failed Approach - All these Operations Are O(N) - Time Complexity - Improvement Is neccessarily Needed. 
// Approach - 2 Without Using Built In Libraries

// class MyHashSet {
// private:
//     vector<int> ans ;
// public:
//     MyHashSet() {
        
//     }
    
//     void add(int key) {
//         bool flag = true;
//         for(int i = 0 ; i < ans.size() ; i++)
//         {
//             if(key == ans[i])
//             {
//                 flag = false ;
//             }
//         }
//         if(flag == true)
//         {
//             ans.push_back(key) ;
//         }
//     }
    
//     void remove(int key) {
//             if(ans.size() == 0)
//             {
                
//             }

//             if(key == ans[ans.size() - 1])
//             {
//                 ans.pop_back() ;
//             }
//             else
//             {
//                 for(int i = 0 ; i < ans.size() - 1 ; i++)
//                 {
//                     if(ans[i] == key)
//                     {   
//                         ans[i] = ans[i + 1] ; 
//                     }
//                 }
//             }
//     }
    
//     bool contains(int key) {
//         if(ans.size() == 0)
//         {
//             return false ; 
//         }
//         for(int i = 0 ; i < ans.size() ;i++)
//         {
//             if(ans[i] == key)
//             {
//                 return true ;
//             }
//         }
//         return false; 
//     }
// };


// Approach - 3 - Solution - O(1) Time Complexity and O(N) - Space Complexity 

class MyHashSet {
private:
    vector<bool> result; 
public:
    MyHashSet() {
        result.resize(1e6 + 1 , false);  
    }
    void add(int key) {
        result[key] = true ;
    }
    
    void remove(int key) {
        result[key] = false ; 
    }
    
    bool contains(int key) {
        if(result[key] == true)
        {
            return true; 
        }
        return false; 
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */



//  Approach - 2 