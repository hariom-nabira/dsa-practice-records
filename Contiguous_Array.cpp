class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int sum=0, ans = 0;
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
// Title: Contiguous Array
