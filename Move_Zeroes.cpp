class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),lastIndex=0,count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[lastIndex] = nums[i];
                lastIndex++;
            }else count++;
        }
        for(int i=n-1;i>n-1-count;i--)
            nums[i]=0;
    }
};
// Title: Move Zeroes
