class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0,d=0;
        for(auto e:nums){
            if(e<10){
                s+=e;
            }else if(e<20){
                d+=e;
            }
        }
        return s!=d;
    }
};