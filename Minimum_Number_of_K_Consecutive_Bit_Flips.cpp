class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size(), ans=0, flipsActive=0;
        vector<bool> fliped(n);
        for(int i=0;i<n;i++){
            if(i>=k && fliped[i-k]) 
                flipsActive--;
            if(flipsActive%2 == nums[i]){
                if(i+k > n) return -1;
                fliped[i]=true;
                ans++;
                flipsActive++;
            }
        }
        return ans;
    }
};
// Title: Minimum Number of K Consecutive Bit Flips
