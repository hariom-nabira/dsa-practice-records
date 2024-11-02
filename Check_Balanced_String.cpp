class Solution {
public:
    bool isBalanced(string s) {
        int sum=0, n=s.size();
        for(int i=0; i<n; i+=2){
            sum += s[i]-'0';
        }
        for(int i=1;i<n;i+=2){
            sum -= s[i]-'0';
        }
        return (sum==0);
    }
};
// Title: Check Balanced String
