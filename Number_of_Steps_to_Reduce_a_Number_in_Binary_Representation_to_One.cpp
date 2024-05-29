class Solution {
public:
    int numSteps(string s) {
        int ans=0;
        for(int end=s.size()-1;end>0;end--){
            if(s[end]=='0') ans++;
            else if(s[end-1]=='0'){
                ans+=2;
                s[end-1]='1';
            }else{
                ans+=4;
                end--;
            }
        }
        return ans;
    }
};
// Title: Number of Steps to Reduce a Number in Binary Representation to One
