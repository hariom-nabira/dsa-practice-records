class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,ans=0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            ans += mp[sum%k];
            // if(nums[i]%k==0) ans++;
            mp[abs(sum%k)]++;
        }
        // for(int i=0;i<k;i++)
        //     cout<<mp[i]<<" ";
        //     cout<<endl<<(-1%2);
        return ans;
    }
};