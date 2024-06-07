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
        for(int i=0;i<n;i++){
            if(temp->children[word[i] - 'a']==NULL){
                TrieNode* n = new TrieNode();
                temp->children[word[i]-'a'] = n;
                temp = n;
            }else{
                temp = temp->children[word[i]-'a'];
            }
        }
        temp->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* temp = root;
        int n = word.size(),i=0;
        while(i<n && temp -> children [word[i] - 'a'] != NULL) {
            cout<<word[i]<<endl;
            temp = temp->children[word[i]-'a'];
            i++;
        }
        if(i==n && temp->isEnd)
            return true;
        else
            return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp = root;
        int n = prefix.size(),i=0;
        while(i<n && temp->children[prefix[i]-'a']!=NULL) {
            temp = temp->children[prefix[i]-'a'];
            i++;
        }
        if(i==n)
            return true;
        else
            return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */