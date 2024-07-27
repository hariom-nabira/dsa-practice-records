class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i*i <= n;i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int nonSpecialCount(int l, int r) {
        int start = sqrt(l), count=0;
        if(start*start < l) start++;
        while(start*start <= r){
            if(isPrime(start)) count++;
            start++;
        }
        return r-l+1-count;
    }
};
// Title: Find the Count of Numbers Which Are Not Special
