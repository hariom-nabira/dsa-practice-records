class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(), ans=0;
        for(int i=0;i<n-2;i++){
            if(!nums[i]){
                nums[i+1] = (nums[i+1])? 0:1;
                nums[i+2] = (nums[i+2])? 0:1;
                ans++;
            }
        }
        if(nums[n-2] && nums[n-1]) return ans;
        else return -1;
    }
};
// Title: Minimum Operations to Make Binary Array Elements Equal to One I
