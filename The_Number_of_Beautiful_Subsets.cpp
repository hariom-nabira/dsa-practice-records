class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int ans=0;
        unordered_set<int> path;
        backtrack(nums,k,0,path,ans);
        return  ans;
    }
    void backtrack(vector<int> &nums, int k, int index, unordered_set<int> &path, int &ans){
        if(index==nums.size()) return;
        if(!path.contains(nums[index]-k) && !path.contains(nums[index]+k)){
            path.insert(nums[index]);
            ans++;
            backtrack(nums,k,index+1,path,ans);
            path.erase(nums[index]);
        }
        backtrack(nums,k,index+1,path,ans);
    }
};