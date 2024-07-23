class Solution {
public:
    int mappedVal(int n, vector<int>& mapping){
        if(n==0) return mapping[0];
        int ans=0,i=0;
        while(n>0){
            ans += mapping[n%10]*pow(10,i);
            n/=10;
            i++;
        }
        return ans;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto e:nums){
            mp[e] = mappedVal(e,mapping);
        }
        sort(nums.begin(),nums.end(), [&](int &a, int &b){
            return mp[a]<mp[b];
        });
        return nums;
    }
};