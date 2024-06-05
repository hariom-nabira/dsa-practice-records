class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26,INT_MAX), temp(26);
        for(auto &word: words){
            for(auto &ch: word)
                temp[ch-'a']++;
            for(int i=0;i<26;i++)
                minFreq[i] = min(minFreq[i],temp[i]);
            fill(temp.begin(),temp.end(),0);
        }
        vector<string> ans;
        for(int i=0;i<26;i++){
            while(minFreq[i]--){
                ans.push_back(string(1, i+'a'));
            }
        }
        return ans;
    }
};