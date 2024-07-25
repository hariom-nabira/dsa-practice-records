class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last=1,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[last++] = nums[i];
            }
        }
        return last;
    }
};
// Title: Remove Duplicates from Sorted Array
