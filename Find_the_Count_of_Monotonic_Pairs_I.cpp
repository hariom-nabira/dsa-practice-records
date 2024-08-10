class Solution {
public:
    int countOfPairs(vector<int>& nums) {
        int ans=0;
        helper(nums,0,0,nums[0],ans);
        return ans;
    }
    void helper(vector<int> &nums,int ind, int l1, int l2, int &ans){
        if(ind==nums.size()){
            ans++;
            return;
        }
        for(int i=l1; i<=nums[ind]; i++){
            if(nums[ind]-i <= l2)
                helper(nums,ind+1,i,nums[ind]-i,ans);
        }
    }
};
// Title: Find the Count of Monotonic Pairs I
