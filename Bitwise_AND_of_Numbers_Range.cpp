class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int leftc=left,rightc=right,count=-1;
        while(left>0 && right>0){
            count++;
            left>>=1;
            right>>=1;
        }
        if(!left && right) return 0;
        if(!right && left) return 0;
        int ans = (count>-1)? (1<<count) : 0;
        int temp = leftc ^ rightc;
        while(count >= 0){
            cout<<temp<<" "<<count<<" "<<(1<<count)<<" ";
            if ((temp & (1<<count))) {
                break;
            }
            ans = ans | (leftc&(1<<count));
            cout<<ans<<endl;
            count--;
        }
        return ans;
    }
};
// Title: Bitwise AND of Numbers Range
