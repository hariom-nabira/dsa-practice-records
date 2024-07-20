class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n=nums.size();
        for(int i=0;i<n;i++) nums[i] = target[i]-nums[i];
        long long ans = abs(nums[0]);
        long long mn = abs(nums[0]);
        bool dec = false;
        for(int i=1;i<n;i++){
            if(nums[i]/abs(nums[i]) == nums[i-1]/abs(nums[i-1])){
                if(abs(nums[i]) >= abs(nums[i-1]) && !dec){
                    ans += abs(nums[i]) - abs(nums[i-1]);
                }else if(abs(nums[i]) >= abs(nums[i-1]) && !dec){
                    dec=false;
                    ans += abs(nums[i]) - mn;
                }else{
                    dec = true;
                }
            }else{
                ans += abs(nums[i]);
                mn = abs(nums[i]);
            }
        }
        return ans;
    }
};
// Title: Minimum Operations to Make Array Equal to Target
