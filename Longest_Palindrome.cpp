class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> freq;
        for(auto &ch:s)
            freq[ch]++;
        int len=0,odd=0;
        for(auto &p:freq){
            if(p.second & 1) odd++;
            len += (p.second / 2)*2;
        }
        if(odd) len++;
        return len;
    }
};