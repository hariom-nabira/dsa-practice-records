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
                ans+=3;
                int temp = end-2;
                while(temp >=0 && s[temp]=='1'){
                    temp--;
                    ans++;
                }
                if(temp>=0) s[temp] = '1';
                end = temp+1;
            }
        }
        return ans;
    }
};