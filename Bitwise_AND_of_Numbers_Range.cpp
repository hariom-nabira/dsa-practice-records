class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0;
        while(left!=right){
            count++;
            left>>=1;
            right>>=1;
        }
        if(!left) return 0;
        return left<<count;
    }
};