class Solution {
public:
    long long countSubstrings(string s, char c) {
        int count=0,ans=0;
        for(auto ch:s){
            if(ch==c){
                count++;
                ans+=count;
            }
        }
        return ans;
    }
};