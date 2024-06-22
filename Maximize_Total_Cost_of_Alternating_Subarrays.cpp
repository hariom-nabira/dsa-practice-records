class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        int n = nums.size();
        long long ans = nums[0];
        for(int i=1 ;i < (n-1);i++){
            if(nums[i] >= 0)
                ans+=nums[i];
            else{
                if(nums[i+1]<0){
                    ans += -1LL * min(nums[i],nums[i+1]);
                    ans += max(nums[i],nums[i+1]);
                }else{
                    ans += abs(nums[i]);
                    ans += abs(nums[i+1]);
                }
                i++;
            }
        }
        cout<<n;
        if(n>=2 && nums[n-2]>0) ans += abs(nums[n-1]);
        return ans;
    }
};