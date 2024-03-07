class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        if(nums[0]==0) return false;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]==0 && nums[i-1]<=i)
                return false;
            nums[i] = max(nums[i-1], i+nums[i]);
        }
        return true;
    }
};