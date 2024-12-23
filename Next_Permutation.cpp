class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                swap(nums[i], nums[i+1]);
                return;
            }
        }
        for(int i=0; i<n/2; i++){
            swap(nums[i], nums[n-1-i]);
        }
    }
};
// Title: Next Permutation
