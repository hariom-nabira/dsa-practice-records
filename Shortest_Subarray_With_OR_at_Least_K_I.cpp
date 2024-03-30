class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int mn = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int xr=0;
            for(int j=i;j<nums.size();j++){
                xr = xr | nums[j];
                if(xr>=k){
                    mn = min(mn,j-i+1);
                    break;
                }
            }
        }
        return mn;
    }
};
// Title: Shortest Subarray With OR at Least K I
