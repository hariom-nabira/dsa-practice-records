class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++){
            it = mp.find(target-nums[i]);
            if(it!=mp.end() && it->second!=i)
                    return {i,mp[target-nums[i]]};
        }
        return{-1,-1};
    }
};
// Title: Two Sum
