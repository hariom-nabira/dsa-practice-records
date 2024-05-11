class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int ans=INT_MIN, n = energy.size();
        for(int i=0;i<k;i++){
            int last = n-((n-i)%k);
            int sum = energy[last], currBest = energy[last];
            for(int j=last-k;j>=i;j-=k){
                sum+=energy[j];
                currBest = max(sum,currBest);
            }
            ans = max(ans,currBest);
        }
        return ans;
    }
};