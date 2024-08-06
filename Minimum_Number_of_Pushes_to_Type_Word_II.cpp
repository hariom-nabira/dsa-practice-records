class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(auto ch:word){
            freq[ch-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int ans=0, push=1;
        for(int i=0;i<26;i++){
                if(freq[i+j]==0) return ans;
                ans += freq[i] * ((i/8)+1);
        }
        return ans;
    }
};
// Title: Minimum Number of Pushes to Type Word II
