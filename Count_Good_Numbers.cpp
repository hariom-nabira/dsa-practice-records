class Solution {
public:
    static const int M = 1e9+7;
    int countGoodNumbers(long long n) {
        return helper(1,true,n);
    }
    int helper(long long curr,bool even,long long n){
        if(curr==n+1) return 1;
        if(even) return (int)(1LL*5*(helper(curr+1,!even,n))%M)%M;
        return (int)(1LL*4*(helper(curr+1,!even,n))%M)%M;
    }
};
// Title: Count Good Numbers
