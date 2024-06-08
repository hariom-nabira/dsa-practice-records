class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0] = -1;
        for(int i=0;i<n;i++){
            if(!mp.contains(nums[i]%k))
                mp[nums[i]%k] = i;
            else if(i-mp[nums[i]%k]>=2)
                return true;
        }
        return false;
    }
};