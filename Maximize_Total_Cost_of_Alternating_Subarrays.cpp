class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        int n = nums.size();
        long long ans = nums[0],i=1;
        while(i<n){
            if(nums[i] >= 0){
                ans+=nums[i];
                i++;
            }
            else{
                long long odd=0,even=0;
                while(i<n && nums[i] < 0){
                    if(i&1)
                        odd += nums[i];
                    else
                        even += nums[i];
                    i++;
                }
                ans += -1 * min(odd,even);
                ans += max(odd,even);
            }
        }
        return ans;
    }
};