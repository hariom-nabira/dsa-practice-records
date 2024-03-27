class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<1 || nums[i]>n)
                nums[i] = n+1;
        }
        for(int i=0;i<n;i++){
            int absn = abs(nums[i]);
            if(absn > n)
                continue;
            else if(nums[absn-1] > 0)
                nums[absn-1] = -1 * nums[absn-1];
        }
        for(int i=0;i<n;i++){
            if(nums[i] >= 0)
                return i+1;
        }
        return n+1;
    }
};