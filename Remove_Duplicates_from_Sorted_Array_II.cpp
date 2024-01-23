class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[i+2]){
                nums[last] = nums[i];
                last++;
                if(nums[i]==nums[i+1]){
                    nums[last] = nums[i];
                    last++;i++;
                }
            }
        }
        return last;
    }
};
// Title: Remove Duplicates from Sorted Array II
