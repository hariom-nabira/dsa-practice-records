class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans(1,vector<int>());
        helper(nums,0,ans,vector<int>());
        return ans;
    }
    void helper(vector<int> &nums, int i, vector<vector<int>> &ans, vector<int> parent){
        if(i==nums.size()) return;
        helper(nums,i+1,ans,parent);
        parent.push_back(nums[i]);
        ans.push_back(parent);
        helper(nums,i+1,ans,parent);
    }
};