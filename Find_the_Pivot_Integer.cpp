class Solution {
public:
    int pivotInteger(int n) {
        double d = sqrt((n*n+n)/2);
        if(d==floor(d)) return d;
        else return -1;
    }
};