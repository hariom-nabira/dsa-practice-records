// copied for streak

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size(); 
        unordered_map<int, int> frequency; 
        int start = 0;
        int charsWithFreqOverK = 0;
        
        for (int end = 0; end < n; end++) {
            frequency[nums[end]]++;
            if (frequency[nums[end]] == k + 1) {
                charsWithFreqOverK++;
            }
            if (charsWithFreqOverK > 0) {
                frequency[nums[start]]--;
                if (frequency[nums[start]] == k) {
                    charsWithFreqOverK--;
                }
                start++;
            }
        }
        return n - start;
    }
};

// class Solution {
// public:
//     int maxSubarrayLength(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         int mxfreq = INT_MIN, mxlen = INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;

//         }
//     }
// };