class Solution {
public:
    int sumOfSquares(int n){
        int ans=0;
        while(n>0){
            ans += (n%10) * (n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(1){
            if(s.contains(n)) return false;
            if(n==1) return true;
            s.insert(n);
            n = sumOfSquares(n);
        }
    }
};
// Title: Happy Number
