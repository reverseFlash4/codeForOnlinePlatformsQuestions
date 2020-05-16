// Day 14 of LeetCode May Challenge, by Kartik Mohan
// Implement Trie
class TrieNode{
  public:
    TrieNode* child[26]={0};
    bool isword=false;
};
TrieNode* root;
class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* ptr=root;
        for(char c:word)
        {
            if(ptr->child[c-'a'])
                ptr=ptr->child[c-'a'];
            else
            {
                ptr->child[c-'a']= new TrieNode();
                ptr=ptr->child[c-'a'];
            }
        }
        ptr->isword=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* ptr=root;
        for(char c: word)
        {
            if(ptr->child[c-'a']) ptr=ptr->child[c-'a'];
            else return false;
        }
        return ptr->isword;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* ptr=root;
        for(char c: prefix)
        {
            if(ptr->child[c-'a']) ptr=ptr->child[c-'a'];
            else return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
