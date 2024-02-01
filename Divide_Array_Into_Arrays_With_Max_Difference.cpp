class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans(nums.size()/3,vector<int> (3));
        for(int i=0;i<nums.size();i+=3){
            if(nums[i+1]-nums[i]<=k && nums[i+2]-nums[i+1]<=k){
                ans[i/3][0] = nums[i];
                ans[i/3][1] = nums[i+1];
                ans[i/3][2] = nums[i+2];
            }else{
                return vector<vector<int>>();
            }
        }
        return ans;
    }
};