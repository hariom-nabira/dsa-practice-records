class Solution {
public:
    void mySwap(int &a,int &b){
        a = a^b;
        b = a^b;
        a = a^b;
    }
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        while(i>0 && nums[i-1]>=nums[i]) i--;
        if(i==0){
            sort(nums.begin(),nums.end());
            return;
        }
        int j=i;
        while(j<nums.size() && nums[j]>nums[i-1]) j++;
        mySwap(nums[i-1],nums[j-1]);
        sort(nums.begin()+i,nums.end());
    }
};
// Title: Next Permutation
