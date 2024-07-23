class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<float,int>> q;
        for(int i=0;i<n;i++){
            q.push({sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]),i});
            if(q.size()>k)
                q.pop();
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back(points[q.top().second]);
            q.pop();
        }
        return ans;
    }
};
// Title: K Closest Points to Origin
