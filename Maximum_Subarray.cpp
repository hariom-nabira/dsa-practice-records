class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0],sum=nums[0],i=0,j=0;
        while(j<nums.size()-1){
            mx=max(mx,sum);
            if(sum<0){
                sum=nums[++j];
                i=j;
            }else{
                sum+=nums[++j];
            }
        }
        mx=max(mx,sum);
        return mx;
    }
};
// Title: Maximum Subarray
