//same logic as my own but by using freqArray instead of sorting , complexity saved!!

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int max_val = 0;
        int minIncrements = 0;

        // Find maximum value in nums using a loop
        for (int val : nums) {
            max_val = max(max_val, val);
        }

        // Create a frequencyCount vector to store the frequency of each value
        // in nums
        vector<int> frequencyCount(n + max_val + 1, 0);

        // Populate frequencyCount vector with the frequency of each value in
        // nums
        for (int val : nums) {
            frequencyCount[val]++;
        }

        // Iterate over the frequencyCount vector to make all values unique
        for (int i = 0; i < frequencyCount.size(); i++) {
            if (frequencyCount[i] <= 1) continue;

            // Determine excess occurrences, carry them over to the next value,
            // ensure single occurrence for current value, and update
            // minIncrements.
            int duplicates = frequencyCount[i] - 1;
            frequencyCount[i + 1] += duplicates;
            frequencyCount[i] = 1;
            minIncrements += duplicates;
        }

        return minIncrements;
    }
};