class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n && !(n&(n-1))) return true;
        return false;
    }
};
// Title: Power of Two
