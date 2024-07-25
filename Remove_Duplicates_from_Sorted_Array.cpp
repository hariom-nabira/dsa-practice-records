class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[last]){
                nums[++last] = nums[i];
            }
        }
        return last+1;
    }
};