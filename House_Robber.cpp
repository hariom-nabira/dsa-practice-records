class Solution {
public:
    int rob(vector<int>& nums) {
        return helper(nums,nums.size()-1);
    }
    int helper(vector<int> nums,int n){
        if(n<0) return 0;
        if(n==0) return nums[0];
        return max(nums[n]+helper(nums,n-2) , nums[n-1]+helper(nums,n-3));
    }
};
// Title: House Robber
