class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        for(int i=0;i<k;i++)
            ans += max(happiness[i]-i, 0);
        return ans;
    }
};
// Title: Maximize Happiness of Selected Children
