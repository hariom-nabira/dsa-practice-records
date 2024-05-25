class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int> freq(50);
        int ans=0;
        for(auto &num:nums){
            if(freq[num-1]>0)
                ans ^= num;
            else
                freq[num-1]++;
        }
        return ans;
    }
};