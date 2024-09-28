class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(),maximumHeight.end(), greater<int>());
        int ans = 0, lastUsed = INT_MAX;
        for(auto &e: maximumHeight){
            if(e < lastUsed){
                // ans += e;
                lastUsed = e;
            }else{
                // ans += (lastUsed-1);
                lastUsed--;
            }
            ans += lastUsed;
        }
        return (lastUsed > 0)? ans : -1;
    }
};
// Title: Maximize the Total Height of Unique Towers
