class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size(), ans=0;
        for(int i=0;i<n-k+1;i++){
            if(!nums[i]){
                for(int q=1;q<=k-1;q++){
                    nums[i+q] = (nums[i+q])? 0:1;
                }
                ans++;
            }
        }
        bool flag = true;
        for(int i=n-1;i>=n-k+1;i--){
            flag = flag && nums[i];
        }
        if(flag) return ans;
        else return -1;
    }
};