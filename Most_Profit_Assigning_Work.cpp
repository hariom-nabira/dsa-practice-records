class Solution {
public:
    static bool myComp(pair<int,int> &a, pair<int,int> &b){
        return a.first > b.first;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> pr;
        for(int i=0;i<profit.size();i++)
            pr.push_back({profit[i],difficulty[i]});
        sort(pr.begin(),pr.end(),myComp);
        int ans=0;
        for(auto &lim : worker){
            for(int i=0;i<profit.size();i++){
                if(pr[i].second<=lim){
                    ans += pr[i].first;
                    break;
                }
            }
        }
        return ans;
    }
};