class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,ans=0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            ans += mp[sum%k];
            mp[sum%k]++;
        }
        return ans;
    }
};
// Title: Subarray Sums Divisible by K
