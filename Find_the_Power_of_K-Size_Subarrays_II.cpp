class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size(), lastBT = -1;
        for(int i=1;i<k;i++){
            if(nums[i]!=nums[i-1]+1) lastBT = i;
        }
        vector<int> res;
        if(lastBT!=-1) res.push_back(-1);
        else res.push_back(nums[k-1]);
        for(int i=k;i<n;i++){
            if(k==1) res.push_back(nums[i]);
            else if(nums[i]!=nums[i-1]+1){
                lastBT = i;
                res.push_back(-1);
            }else if(lastBT+k-1 > i){
                res.push_back(-1);
            }else{
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
// Title: Find the Power of K-Size Subarrays II
