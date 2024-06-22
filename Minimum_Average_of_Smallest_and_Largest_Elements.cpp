class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double mn = 100;
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1;
        while(i<=j){
            double avg = 1.0*(nums[i]+nums[j])/2.0 ;
            mn = min(mn,avg);
            i++;
            j--;
        }
        return mn;
    }
};