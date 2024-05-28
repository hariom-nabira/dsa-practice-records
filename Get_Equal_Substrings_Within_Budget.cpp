class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans=0,currCost=0,left=0;
        for(int right = 0; right < s.size(); right++) {
            currCost += abs(s[right]-t[right]);
            while (currCost > maxCost) {
                currCost -= abs(s[left]-t[left]);
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};