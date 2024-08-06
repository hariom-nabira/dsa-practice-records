class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(auto ch:word){
            freq[ch-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int ans=0, push=1;
        for(int i=0;i<26;i+=8){
            for(int j=0;j<8 && i+j<26;j++){
                // if(freq[i+j]==0) return ans;
                ans += (freq[i+j]) * push;
            }
            push++;
        }
        return ans;
    }
};