class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int> path;
        backtrack(nums,k,0,path,ans);
        return  ans;
    }
    void backtrack(vector<int> &nums, int k, int index, unordered_map<int,int> &path, int &ans){
        if(index==nums.size()) return;
        if(path[nums[index]-k]==0 && path[nums[index]+k]==0){
            path[nums[index]]++;
            ans++;
            backtrack(nums,k,index+1,path,ans);
            path[nums[index]]--;
        }
        backtrack(nums,k,index+1,path,ans);
    }
};