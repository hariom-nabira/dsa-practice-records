class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        unordered_map<int,int> mp;
        mp[0] = -1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(!mp.contains(sum%k))
                mp[sum%k] = i;
            else if(i-mp[sum%k]>=2)
                return true;
        }
        return false;
    }
};