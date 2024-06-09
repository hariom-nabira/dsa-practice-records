class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,ans=0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            // ans += mp[sum%k];
            // ans += (sum >= 0)? mp[sum%k - k] : mp[sum%k + k];
            
            // explaination: since we can have negative remainders there are 2 values (at a diff of k) in the remainder range that will add to my ans
            // example: for k=6 if sum%k = 2, then we must also look for mp[-4]

            //better way : can we somehow convert both into into some same value and only store that
            //proposal : how about we convert both into the the upper number?
            // how to do it? add k to the remainder and take modulo k;
            // for upper number:  (2+6)%6 = 2
            // for lower number:  (-4+6)%6 = 2
            int rem = sum%k;
            int convertedRem = (rem+k)%k;
            ans += mp[convertedRem];
            mp[convertedRem]++;
            // we could have converted both to the lower number by (rem-k)%k
        }
        return ans;
    }
};
// Title: Subarray Sums Divisible by K
