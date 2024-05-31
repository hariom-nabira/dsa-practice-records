class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr =0, diffBit=0;
        for(auto &ele:nums) xr^=ele;
        while(!(xr&1)){
            xr >>= 1;
            diffBit++;
        }
        // instead of finding diffBit and usig 1<<diffBit we can directly get
        // 1<<diffBit = (xr & xr-1) ^ xr
        int xr1=0,xr2=0;
        for(auto &ele:nums){
            if(ele & (1<<diffBit))
                xr1 ^= ele;
            else
                xr2 ^= ele;
        } 
        return {xr1,xr2};
    }
};