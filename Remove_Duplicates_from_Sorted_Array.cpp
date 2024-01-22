class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[last] = nums[i+1];
                last++;
            }
        }
        return last;
    }
};
// Title: Remove Duplicates from Sorted Array
