class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) return 1.0/(x*myPow(x,-1*(n+1)));
        double res = myPow(x,n/2);
        if(n&1)
            return x*res*res;
        else
            return res*res;
    }
};