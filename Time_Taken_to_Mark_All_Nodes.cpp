class Solution {
public:
    vector<int> timeTaken(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<vector<int>> neighbours(n);
        for(auto edge:edges){
            neighbours[edge[0]].push_back(edge[1]);
            neighbours[edge[1]].push_back(edge[0]);
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i] = myBfs(i,n,neighbours)-1;
        }
        return ans;
    }
private:
    int myBfs(int start, int n, vector<vector<int>> &neighbours){
        vector<int> visited(n);
        queue<int> q, qOdd, qEven;
        q.push(start);
        int visits=0, t=0;
        while(visits<n){
            if(t&1){
                while(!qOdd.empty()){
                    q.push(qOdd.front());
                    qOdd.pop();
                }
            }else{
                while(!qEven.empty()){
                    q.push(qEven.front());
                    qEven.pop();
                }
            }
            int s = q.size();
            while(s--){
                int curr=q.front();
                q.pop();
                visited[curr]=1;
                visits++;
                for(auto &nei : neighbours[curr]){
                    if(visited[nei]) continue;
                    if(nei%2==0){
                        if(t&1)
                            qOdd.push(nei);
                        else{
                            qEven.push(nei);
                        }
                    }else{
                        q.push(nei);
                    }
                }
            }
            t++;
        }
        return t;
    }
};