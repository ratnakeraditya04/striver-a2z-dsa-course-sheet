#include <bits/stdc++.h>
using namespace std ;

class WordDictionary {
private:
    vector<string> ans ;
public:
    WordDictionary() {
        // vector<string> ans ;
    }
    void addWord(string word) {
        ans.push_back(word) ;
    }
    bool search(string word) {

        for(int i = 0 ; i < ans.size() ; i++)
        {
            if(ans[i].size() != word.size() )
            {
                continue ;
            }
            bool flag = true ;
            for(int j = 0 ; j < word.size() ; j++)
            {
                if(word[j] == '.')
                {
                    continue ; 
                }
                if(word[j] != ans[i][j])
                {
                    flag = false ;
                    break ;
                }
            }
            if(flag == true )
            {
                return true ;
            }
        }
        return false ;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */