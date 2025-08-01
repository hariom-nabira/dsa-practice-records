class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) {
        int minCoin = INT_MAX;
        for(int ele: coins)
            minCoin = min(minCoin,ele);
        long long range = k*minCoin;
        set<long long> amounts;
        for(int ele:coins){
            int i=1;
            while(ele*i <= range){
                amounts.insert(ele*i);
                i++;
            }
        }
        auto itr = amounts.begin();
        for(int i=1;i<k;i++) itr++;
        return *itr;
    }
};
// Title: Kth Smallest Amount With Single Denomination Combination
