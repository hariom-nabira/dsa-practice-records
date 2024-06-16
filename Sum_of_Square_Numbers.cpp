class Solution {
public:
    bool check(int n){
        if((int)sqrt(n)==sqrt(n)) return true;
        return false;
    }
    bool judgeSquareSum(int c) {
        for(int i=0; i*i <= c;i++){
            if(check(c-(i*i))) return true;
        }
        return false;
    }
};