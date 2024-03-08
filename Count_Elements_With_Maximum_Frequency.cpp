class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mx=INT_MIN,ans=0;
        for(int ele:nums){
            mp[ele]++;
            mx = max(mx,mp[ele]);
        }
        for(auto &p : mp){
            if(p.second == mx) ans+=mx;
        }
        return ans;
    }
};