class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,sum=0,temp;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mp[sum]++;
            count+=mp[sum-k];
        }
        return count;
    }
};
// Title: Subarray Sum Equals K
