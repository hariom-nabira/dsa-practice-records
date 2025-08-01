class Solution {
public:
    double myPow(double x, int n) {
        if(n==1) return x;
        return (n>0)? x*pow(x,n-1) : 1.0/pow(x,-1*n);
    }
};
// Title: Pow(x, n)
