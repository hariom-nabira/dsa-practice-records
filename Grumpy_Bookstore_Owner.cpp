class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size(), ans=0;
        for(int i=0;i<n;i++){
            if(!grumpy[i]){
                ans+=customers[i];
                customers[i] = 0;
            }
        }
        int curr=0, mx = INT_MIN;
        for(int i=0;i<minutes;i++){
            curr += customers[i];
        }
        mx = max(mx,curr);
        for(int i=minutes;i<n;i++){
            curr += customers[i];
            curr -= customers[i-minutes];
            mx = max(curr,mx);
        }
        ans += mx;
        return ans;
    }
};