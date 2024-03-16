class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count=0,ans=0;
        for(auto ch:s){
            if(ch==c){
                count++;
                ans+=count;
            }
        }
        return ans;
    }
};