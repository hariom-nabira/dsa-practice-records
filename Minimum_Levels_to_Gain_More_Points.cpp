class Solution {
public:
    int minimumLevels(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n), suffix(n);
        prefix[0] = nums[0]?1:-1;
        suffix[n-1] = nums[n-1]?1:-1;
        for(int i=1;i<n;i++){
            int temp = nums[i] ? 1:-1; 
            prefix[i] = prefix[i-1]+temp;
        }
        for(int j=n-2;j>=0;j--){
            int temp = nums[j] ? 1:-1;
            suffix[j] = suffix[j+1]+temp;
        }
        for(int k=0;k<n-1;k++){
            if(prefix[k]>suffix[k+1]){
                return k+1;
            }
        }
        return -1;
    }
};