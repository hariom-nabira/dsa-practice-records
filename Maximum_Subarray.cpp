class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0],sum=nums[0],i=0,j=1;
        while(j<nums.size()){
            mx=max(mx,sum);
            if(sum<0){
                sum=nums[j++];
                i=j-1;
            }else{
                sum+=nums[j++];
            }
        }
        mx=max(mx,sum);
        return mx;
    }
};