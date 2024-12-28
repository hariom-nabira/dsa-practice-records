class Solution {
public:
    void twoSum(vector<int> &nums, int start, int target, vector<vector<int>> &ans){
        for(int i=start; i<(int)nums.size(); i++){
            if(binary_search(nums.begin()+i+1, nums.end(),target - nums[i])){
                // cout<<start<<" "<<
                ans.push_back({-1*target, nums[i], target - nums[i]});
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<=nums.size()-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            twoSum(nums,i+1, -1*nums[i], ans);
        }
        return ans;
    }
};