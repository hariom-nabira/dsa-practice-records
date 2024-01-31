class Solution {
public:
    double myPow(double x, int n) {
        if(n==1) return x;
        if(n==-1) return 1.0/x;
        double res = myPow(x,n/2);
        if(n&1)
            return x*res*res;
        else
            return res*res;
    }
};