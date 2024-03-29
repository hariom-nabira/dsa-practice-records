//copied for streak

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxElement = *max_element(nums.begin(), nums.end());
        long long ans = 0, start = 0;

        for (int end = 0; end < nums.size(); end++) {
            if (nums[end] == maxElement) {
                k--;
            }
            while (!k) {
                if (nums[start] == maxElement) {
                    k++;
                }
                start++;
            }
            ans += start;
        }
        return ans;
    }
};