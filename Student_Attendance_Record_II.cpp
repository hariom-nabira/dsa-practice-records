class Solution {
    int MOD = 1e9+7;

public:
    int eligibleCombinations(int n, int totalAbsences, int consecutiveLates, vector<vector<vector<int>>> &memo) {
        if (totalAbsences >= 2 or consecutiveLates >= 3) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        if (memo[n][totalAbsences][consecutiveLates] != -1) {
            return memo[n][totalAbsences][consecutiveLates];
        }
        int count = 0;
        // We choose 'P' for the current position.
        count = eligibleCombinations(n - 1, totalAbsences, 0, memo);
        // We choose 'A' for the current position.
        count = (count + eligibleCombinations(n - 1, totalAbsences + 1, 0, memo)) % MOD;
        // We choose 'L' for the current position.
        count = (count + eligibleCombinations(n - 1, totalAbsences, consecutiveLates + 1, memo)) % MOD;

        // Return and store the current sub-problem result in the cache.
        return memo[n][totalAbsences][consecutiveLates] = count;
    }

    int checkRecord(int n) {
        vector<vector<vector<int>>> memo(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        return eligibleCombinations(n, 0, 0, memo);
    }
};