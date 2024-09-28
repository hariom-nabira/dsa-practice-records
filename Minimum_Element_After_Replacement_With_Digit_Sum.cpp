class Solution {
public:
    int sumOfDigits(int n){
        int ans=0;
        while(n>0){
            ans += n%10;
            n /= 10;
        }
        return ans;
    }
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;
        for(auto &e : nums){
            mn = min(mn, sumOfDigits(e));
        }
        return mn;
    }
};
// Title: Minimum Element After Replacement With Digit Sum
