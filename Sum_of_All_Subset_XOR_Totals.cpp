class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return helper(nums,0,0);
    }
    int helper(vector<int>& nums, int i,int xr){
        if(i==nums.size()) return xr;
        return helper(nums,i+1,xr^nums[i]) + helper(nums,i+1,xr);
    }
};
// Title: Sum of All Subset XOR Totals
