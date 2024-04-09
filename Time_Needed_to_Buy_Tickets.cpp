class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        for(int ele : tickets)
            if(ele > tickets[k])
                ans+=tickets[k];
            else
                ans+= ele;
        return ans;
    }
};
// Title: Time Needed to Buy Tickets
