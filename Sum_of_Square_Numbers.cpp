class Solution {
public:
    bool check(int n){
        if((int)sqrt(n)==sqrt(n)) return true;
        return false;
    }
    bool judgeSquareSum(int c) {
        for(long long i=0; i*i <= c;i++){
            if(check(c-(i*i))) return true;
        }
        return false;
    }
};
// Title: Sum of Square Numbers
