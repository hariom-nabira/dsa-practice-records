class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int sum=0, ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&1) sum++;
            else sum--;
            if(mp.count(sum))
                ans = max(ans,i-mp[sum]);
            else mp[sum] = i;
        }
        return ans;
    }
};