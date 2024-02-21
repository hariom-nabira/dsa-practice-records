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
            int minBooked = bookedTill[0], minBookedRoom = 0, start=pq.top().first, end=pq.top().second;
            for(int i=0;i<n;i++){
                if(bookedTill[i] <= start){
                    bookedTill[i] = end;
                    meets[i]++;
                    flag=false;
                    break;
                }
                if(bookedTill[i] < minBooked){
                    minBooked = bookedTill[i];
                    minBookedRoom = i;
                }
            }
            if(flag){
                bookedTill[minBookedRoom] += end - start;
                meets[minBookedRoom]++;
            }
            pq.pop();
        }
        int mx=meets[0], ans=0;
        for(int i=0;i<n;i++){
            if(meets[i] > mx){
                mx = meets[i];
                ans = i;
            }
        }
        return ans;
    }
};