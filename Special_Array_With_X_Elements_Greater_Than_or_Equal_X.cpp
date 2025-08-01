//redo

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> frequency(n + 1, 0);

        for (int num : nums) {
            frequency[min(n, num)]++;
        }

        int num_greater_equal = 0;
        for (int candidate_number = n; candidate_number > 0; --candidate_number) {
            num_greater_equal += frequency[candidate_number];
            if (candidate_number == num_greater_equal) {
                return candidate_number;
            }
        }

        return -1;
    }
};
// Title: Special Array With X Elements Greater Than or Equal X
