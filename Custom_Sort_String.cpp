class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> freq(26,0);
        string ans;
        for(const char ch : s){
            freq[ch-'a']++;
        }
        for(const char ch : order){
            for(int i=0;i<freq[ch-'a'];i++){
                ans+=ch;
            }
            freq[ch-'a'] = 0;
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<freq[i];j++){
                ans+=  (char)('a'+i);
            }
        }
        return ans;
    }
};
// Title: Custom Sort String
