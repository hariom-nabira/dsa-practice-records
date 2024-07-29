class Solution {
public:
    int minimumDeletions(string s) {
        int totalA=0, currB=0, currA=0, ans=INT_MAX;
        for(auto &e:s){
            if(e=='a') totalA++;
        }
        for(auto &ch:s){
            if(ch=='b'){
                ans = min(ans, currB + totalA - currA);
                currB++;
            }else{
                ans = min(ans, currB + totalA - currA);
                currA++;
            }
        }
        return ans;
    }
};
// Title: Minimum Deletions to Make String Balanced
