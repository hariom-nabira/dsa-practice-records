class Trie{
    class TrieNode{
    public:
        bool isEnd;
        vector<TrieNode*> children = vector<TrieNode*>(26);
    };
    TrieNode* root;
public:
    Trie(){
        root = new TrieNode();
    }
    void insert(string word){
        TrieNode* temp = root;
        for(auto &ch:word){
            if(!temp->children[ch-'a']){
                temp->children[ch-'a'] = new TrieNode();
            }
            temp = temp->children[ch-'a'];
        }
        temp->isEnd = true;
    }
    string shortestRoot(string word){
        TrieNode* temp = root;
        for(int i=0;i<word.size();i++){
            if(!temp->children[word[i]-'a']) return word;
            temp = temp->children[word[i]-'a'];
            if(temp->isEnd) return word.substr(0,i+1);
        }
        return word;
    }
};

class Solution {
public:
    vector<string> split(string sentence, char delimiter){
        stringstream ss(sentence);
        string token;
        vector<string> res;
        while(getline(ss,token,delimiter))
            res.push_back(token);
        return res;
    }

    // string shortestRoot(string word, unordered_set<string> dict){
    //     for(int len=1; len <= word.size(); len++){
    //         string prefix = word.substr(0,len);
    //         if(dict.contains(prefix))
    //             return prefix;
    //     }
    //     return word;
    // }
    string replaceWords(vector<string>& dictionary, string sentence) {
        Trie* dict = new Trie();
        for(auto & word:dictionary) dict->insert(word);
        vector<string> words = split(sentence,' ');
        string ans;
        for(auto &str:words){
            ans += dict->shortestRoot(str) + ' ';
        }
        ans.pop_back();
        return ans;
    }
};