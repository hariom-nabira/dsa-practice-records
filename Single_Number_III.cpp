class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr =0;
        for(auto &ele:nums) xr^=ele;
        int n1=0,n2=0;
        for(auto &ele:nums){
            int temp = ele^xr;
            if(temp==n1) n1=0;
            else if(temp==n2) n2=0;
            else if(n1==0) n1=temp;
            else n2=temp;
        } 
        return {n1,n2};
    }
};
// Title: Single Number III
