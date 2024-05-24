class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char,int> mp;
        for(auto &letter : letters)
            mp[letter]++;
        return backtrack(words,0,mp,score);
    }
    int backtrack(vector<string>&words, int i, unordered_map<char,int> &mp, vector<int>& score){
        if(i==words.size()) return 0;
        int take = 0, skip = 0;
        if(canFit(words[i],mp)){
            take += calculateScore(words[i],mp,score);
            take += backtrack(words,i+1,mp,score);
            giveBack(words[i],mp);
        }
        skip = backtrack(words,i+1,mp,score);
        return max(take,skip);
    }
    bool canFit(string word, unordered_map<char,int>&mp){
        // for(auto &ch: word)
        //     if(!mp[ch]) return false;
        unordered_map<char,int> freq;
        for(auto &ch:word)
            freq[ch]++;
        for(auto &p:freq)
            if(p.second > mp[p.first]) return false;
        return true;
    }
    int calculateScore(string word, unordered_map<char,int>&mp, vector<int>& score){
        int sc = 0;
        for(auto &ch:word){
            mp[ch]--;
            sc += score[ch-'a'];
        }
        return sc;
    }
    void giveBack(string word, unordered_map<char,int>&mp){
        for(auto &ch:word)
            mp[ch]++;
    }
};