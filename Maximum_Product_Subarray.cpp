class Solution {
public:
    int helper(vector<int> &nums, int l, int r, int prod){
        if(l>=r) return prod;
        int prodLeft=1, prodRight=1;
        for(int i=l; i<=r; i++){
            prodLeft *= nums[i];
            if(nums[i]<0) break;
        }
        for(int i=r; i>=l; i--){
            prodRight *= nums[i];
            if(nums[i]<0) break;
        }
        return prod / max(prodLeft, prodRight);
    }
    int maxProduct(vector<int>& nums) {
        int prod=1, ans=INT_MIN, last=0, n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                ans = max(ans, 0);
                if(last<=i-1) ans = max(ans, (prod>=0)?prod : helper(nums, last, i-1, prod));
                prod = 1;
                last = i+1;
            }else{
                prod *= nums[i];
            }
        }
        if(last<=n-1)ans = max(ans, (prod>=0)?prod : helper(nums, last, n-1, prod));
        return ans;
    }
};