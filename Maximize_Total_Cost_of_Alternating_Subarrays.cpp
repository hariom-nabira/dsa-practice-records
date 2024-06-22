class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        int n = nums.size();
        long long ans = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] >= 0)
                ans+=nums[i];
            else{
                if(i<n-1 && nums[i+1]<0){
                    ans += -1LL * min(nums[i],nums[i+1]);
                    ans += max(nums[i],nums[i+1]);
                    i++;
                }else{
                    ans += abs(nums[i]);
                }
            }
        }
        return ans;
    }
};