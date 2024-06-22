class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flips=0,n=nums.size();
        for(int i=0;i<n;i++){
            if((nums[i] && flips&1) || (!nums[i] && !(flips&1))){
                flips++;
            }
        }
        return flips;
    }
};
// Title: Minimum Operations to Make Binary Array Elements Equal to One II
