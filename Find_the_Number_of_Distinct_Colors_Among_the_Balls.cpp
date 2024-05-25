class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> balls, cCount;
        int uCount=0;
        vector<int> ans;
        for(auto &q: queries){
            if(balls[q[0]]==0){
                if(cCount[q[1]]==0)uCount++;
                cCount[q[1]]++;
            }else{
                cCount[balls[q[0]]]--;
                if(cCount[balls[q[0]]]==0) uCount--;
                if(cCount[q[1]]==0) uCount++;
                cCount[q[1]]++;
            }
            balls[q[0]] = q[1];
            ans.push_back(uCount);
        }
        return ans;
    }
};