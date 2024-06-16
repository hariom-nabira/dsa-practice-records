class Solution {
public:
    bool check(int n){
        if(floor(sqrt(n))==n) return true;
        return false;
    }
    bool judgeSquareSum(int c) {
        for(int i=0; i*i <= c;i++){
            if(check(c-(i*i))) return true;
        }
        return false;
    }
};