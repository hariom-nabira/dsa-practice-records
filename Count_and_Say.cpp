class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string last = countAndSay(n-1);
        int count=0;
        string ans;
        for(int i=0;i<last.size();i++){
            if(last[i]!=last[i+1]){
                ans = ans + to_string(count+1);
                ans = ans + (last[i]);
                count=0;
            }else count++;
        }
        return ans;
    }
};