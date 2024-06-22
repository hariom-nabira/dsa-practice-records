class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        long long ans=0;
        for(auto& ele:nums){
            ans+=abs(ele);
        }
        return ans;
    }
};