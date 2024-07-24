class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int left=0, n=s.size(), ans=INT_MIN;
        for(int right=0;right<n;right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left++]]--;
            }
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};
// Title: Longest Substring Without Repeating Characters
