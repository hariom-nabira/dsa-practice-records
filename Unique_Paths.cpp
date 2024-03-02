class Solution {
public:
    int uniquePaths(int m, int n) {
        long long numerator=1,denominator=1;
        for(int i=m+n-2; i>m-1 && i>n-1;i--)
            numerator *= i;
        for(int i=2;i<m && i<n;i++)
            denominator *= i;
        return numerator/denominator;
    }
};
// Title: Unique Paths
