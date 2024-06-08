class Solution {
public:
    const int MOD = 1e9 + 7;
    int valueAfterKSeconds(int n, int k) {
        vector<long long int> a(n,1);
        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){
                a[j] = (a[j]+a[j-1])%MOD;
            }
        }
        return a[n-1];
    }
};
// Title: Find the N-th Value After K Seconds
