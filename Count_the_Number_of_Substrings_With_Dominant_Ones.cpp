class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        vector<int> pre(n+1);
        for(int i=0; i<n; i++){
            pre[i+1] = pre[i];
            if(s[i]=='0') pre[i+1]++; 
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int z = pre[j+1]-pre[i];
                int o = j-i+1-z;
                if(o >= z*z) ans++;
            }
        }
        return ans;
    }
};
// Title: Count the Number of Substrings With Dominant Ones
