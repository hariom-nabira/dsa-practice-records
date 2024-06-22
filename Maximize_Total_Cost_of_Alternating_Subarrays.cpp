class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        long long ans=0;
        for(auto& ele:nums){
            ans+=abs(ele);
        }
        return ans;
    }
};