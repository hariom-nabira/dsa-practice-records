class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans=0;
        vector<int> freq(n);
        for(int i=0;i<roads.size();i++){
            freq[roads[i][0]]++;
            freq[roads[i][1]]++;
        }
        sort(freq.begin(),freq.end());
        for(int i=0;i<n;i++){
            ans += 1LL*freq[i]*(i+1);
        }
        return ans;
    }
};
// Title: Maximum Total Importance of Roads
