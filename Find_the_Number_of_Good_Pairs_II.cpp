class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int,int> fact;
        for(auto &num: nums1){
            for(int i=1;i*i<=num;i++){
                if(num % i == 0){
                    fact[i]++;
                    if(i*i!=num)fact[num/i]++;
                }
            }
        }
        int ans=0;
        for(auto &num:nums2){
            ans+=fact[num*k];
        }
        return ans;
    }
};
// Title: Find the Number of Good Pairs II
