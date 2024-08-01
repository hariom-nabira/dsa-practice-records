class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto &detail : details){
            if(detail[11] > '6') ans++;
        }
        return ans;
    }
};
// Title: Number of Senior Citizens
