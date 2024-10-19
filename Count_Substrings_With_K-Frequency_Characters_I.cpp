class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int i=0, ans=0, n=s.size();
        vector<int> freq(26);
        for(int j=0;j<n;j++){
            freq[s[j]-'a']++;
            while(freq[s[j]-'a'] >= k){
                ans += n-j;
                freq[s[i++]-'a']--;
            }
        }
        return ans;
    }
};
// Title: Count Substrings With K-Frequency Characters I
