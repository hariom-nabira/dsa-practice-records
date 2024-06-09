class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues) {
        sort(rewardValues.begin(),rewardValues.end());
        int n = rewardValues.size();
        return  rewardValues[n-1] + getMaxPossible(rewardValues,n-2,rewardValues[n-1]-1);
    }
    int getMaxPossible(vector<int> nums,int i, int limit){
        if(i<0) return 0;
        while(i>=0 && nums[i] > limit){
            i--;
        }
        if(i<0) return 0;
        int ans = nums[i];
        ans += getMaxPossible(nums,i-1,min(limit-ans, nums[i]-1));
        return ans;
    }
};