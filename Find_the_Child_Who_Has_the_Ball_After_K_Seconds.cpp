class Solution {
public:
    int numberOfChild(int n, int k) {
        if((k/(n-1)) &1) return n-(k%(n-1))-1;
        else return k%(n-1);
    }
};
// Title: Find the Child Who Has the Ball After K Seconds
