class Solution {
public:
    int minCoins(vector<int> &coins,vector<int> &dp,int v){
        if(v==0) return 0;
        if(dp[v]==-1){
            int mn=INT_MAX;
            for(int c: coins){
                if((v-c)>=0)
                    mn=min(mn,1+minCoins(coins,dp,v-c));
            }
            dp[v]=mn;
        }
        return dp[v];
    }
    int numSquares(int n) {
        vector<int> coins,dp(n+1,-1);
        for(int i=sqrt(n);i>=1;i--)
            coins.push_back(i*i);
        for(int t:coins)
            cout<<t<<" ";
        return minCoins(coins,dp,n);
    }
};
// Title: Perfect Squares
