class Solution {
public:
    bool isPowerOfTwo(int n) {
        return !(n&(n-1));
    }
};
// Title: Power of Two
