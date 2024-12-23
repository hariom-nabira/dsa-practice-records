class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN, sum=0, n=nums.size();
        for(int r=0; r<n; r++){
            sum += nums[r];
            ans = max(sum, ans);
            if(sum<0){
                sum = 0;
            }
        }
        return ans;
    }
};