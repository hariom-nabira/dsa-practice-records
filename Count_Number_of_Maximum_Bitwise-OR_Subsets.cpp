class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for(auto &e:nums){
            maxOr |= e;
        }
        return helper(0,0,nums,maxOr);
    }
    int helper(int i, int currOr, vector<int> &nums, int &maxOr){
        if(i==nums.size()) return (currOr==maxOr);
        return helper(i+1,currOr,nums,maxOr) + helper(i+1,currOr|nums[i],nums,maxOr);
    }
};
// Title: Count Number of Maximum Bitwise-OR Subsets
