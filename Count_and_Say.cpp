class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s = countAndSay(n-1);
        string ans;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[i+1]){
                ans = ans+ to_string(count+1);
                ans = ans+ s[i];
                count=0;
            }
            else count++;
        }
        return ans;
    }
};