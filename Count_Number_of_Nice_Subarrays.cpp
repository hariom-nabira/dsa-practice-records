class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size(),ans=0,curr=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]&1) curr++;
            ans += mp[curr-k];
            mp[curr]++;
        }
        return ans;
    }
};