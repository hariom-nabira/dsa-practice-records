class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) return 1.0/(x*myPow(x,-1*(n+1)));
        double ans=1;
        while(n!=0){
            if(n&1) //n%2==1
                ans=ans*x;
            x = x*x;
            n>>=1; //n=n/2
        }
        return ans;
    }
};