class Solution {
public:
    bool check(vector<int>& nums) {
        bool rotated = false;
        for(int i=0;i<nums.size()-1;i++){
            if(!rotated && nums[i]>nums[i+1])
                rotated=true;
            else if(rotated && !(nums[i]<=nums[i+1] && nums[i+1]<=nums[0]))
                return false;
        }
        return true;
    }
};