class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++){
            it = mp.find(target-nums[i]);
            if(it!=mp.end()) // && it->second!=i doesn't need to be checked coz in case of repeated values current occuirence not put into map yet
                return {i,it->second};
            mp[nums[i]]=i;
        }
        return{-1,-1};
    }
};