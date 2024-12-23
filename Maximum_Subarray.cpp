class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0, sum=0, l=0, n=nums.size();
        for(int r=0; r<n; r++){
            sum += nums[r];
            while(sum<0){
                sum -= nums[l];
                l++;
            }
            ans = max(sum, ans);
        }
        return ans;
    }
};