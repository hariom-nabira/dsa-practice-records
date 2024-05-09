class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        for(int i=0;i<k;i++){
            if(happiness[i]>i)
                ans+=happiness[i]-i;
            else
                break;
        }
        return ans;
    }
};