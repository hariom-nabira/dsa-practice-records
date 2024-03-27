class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0) return 0;
        int i=0,j=0,prod=1,count=0;
        while(j<nums.size()){
            prod *= nums[j];
            while(prod>=k && i<j){
                prod /= nums[i++];
            }
            if(prod<k)
                count += j-i+1;
            j++;
        }
        return count;
    }
};