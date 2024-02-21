class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<long long int> bookedTill(n,-1), meets(n);
        sort(meetings.begin(),meetings.end());
        for(auto &meet:meetings){
            bool flag = true;
            int minBooked = bookedTill[0], minBookedRoom = 0, start=meet[0], end=meet[1];
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