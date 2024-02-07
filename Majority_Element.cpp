class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate,count=0;
        for(int i=0;i<nums.size();i++){
            if(!count)
                candidate=nums[i];
            if(nums[i]==candidate) count++;
            else count--;
        }
        return candidate;
    }
};