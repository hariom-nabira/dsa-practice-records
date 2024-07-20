class Solution {
public:
    int minChanges(int n, int k) {
        int ans=0;
        while(n>0 || k>0){
            if(!(n&1) && k&1) return -1;
            if(n&1 && !(k&1)) ans++;
            n>>=1;
            k>>=1;
        }
        return ans;
    }
};