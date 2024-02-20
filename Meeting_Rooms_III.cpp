struct myCustomComp{
    bool operator()(pair<int,int> &a, pair<int,int> &b){
        return a.first > b.first;
    }
};

class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<int> bookedTill(n,-1), meets(n);
        priority_queue<pair<int,int>, vector<pair<int,int>>, myCustomComp> pq;
        for(vector<int> &v : meetings) pq.push({v[0],v[1]});
        while(!pq.empty()){
            bool flag = true;
            for(int i=0;i<n;i++){
                if(bookedTill[i] <= pq.top().first){
                    bookedTill[i] = pq.top().second;
                    meets[i]++;
                    flag=false;
                    break;
                }
            }
            if(flag){
                int mn = bookedTill[0];
                for(int ele: bookedTill) mn = min(mn,ele);
                pq.push({mn, mn + pq.top().second - pq.top().first});
            }
            pq.pop();
        }
        int mx=meets[0], ans=0;
        for(int i=1;i<n;i++){
            if(meets[i]>mx){
                mx=meets[i];
                ans=i;
            }
        }
        return ans;
    }
};
// Title: Meeting Rooms III
