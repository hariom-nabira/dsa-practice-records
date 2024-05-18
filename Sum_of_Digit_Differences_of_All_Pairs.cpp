class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int n=nums.size();
        int temp = nums[0],digits=0;
        while(temp!=0){
            digits++;
            temp/=10;
        }
        vector<vector<int>> data(digits,vector<int>(10,0));
        for(int i=0;i<n;i++){
            temp = nums[i];
            int d=0;
            for(d=0;d<digits;d++){
                data[d][temp%10]++;
                temp/=10;
            }
        }
        int ans=0;
        for(int i=0;i<digits;i++){
            int d=n;
            for(int j=0;j<9;j++){
                ans+= data[i][j]*(d-data[i][j]);
                d-=data[i][j];
            }
        }
        return ans;
    }
};