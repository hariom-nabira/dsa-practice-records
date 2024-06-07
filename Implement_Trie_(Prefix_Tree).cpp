class Trie {
    class TrieNode{
    public:
        TrieNode* children[26];
        bool isEnd = false;
    };
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp = root;
        int n = word.size();
        for(auto &ch : word){
            if(temp->children[ch - 'a']==NULL){
                temp->children[ch-'a'] = new TrieNode();
            }
            temp = temp->children[ch-'a'];
        }
        temp->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* temp = root;
        for(auto &ch : word) {
            if(temp->children[ch-'a']==NULL) return false;
            temp = temp->children[ch -'a'];
        }
        return temp->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp = root;
        for(auto &ch : prefix) {
            if(temp->children[ch-'a']==NULL) return false;
            temp = temp->children[ch-'a'];
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
// Title: Implement Trie (Prefix Tree)
