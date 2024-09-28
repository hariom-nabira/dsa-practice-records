class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(),maximumHeight.end(), greater<int>());
        int lastUsed = INT_MAX;
        long long ans = 0;
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