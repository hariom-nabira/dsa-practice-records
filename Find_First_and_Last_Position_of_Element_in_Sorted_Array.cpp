class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(first==nums.size() || nums[first]!=target) return {-1,-1};
        int last = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        return {first,last-1};
    }
};
// Title: Find First and Last Position of Element in Sorted Array
