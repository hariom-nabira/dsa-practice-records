class Solution {
public:
    int maxOperations(string s) {
        int z=0,ans=0;
        for(int i=s.size()-1;i>=0;i--){
            int j=i;
            while(j>=0 && s[j]=='0'){
                j--;
            }
            if(j!=i){
                z++;
                i = j+1;
            }
            else ans += z;
        }
        return ans;
    }
};
// Title: Maximum Number of Operations to Move Ones to the End
