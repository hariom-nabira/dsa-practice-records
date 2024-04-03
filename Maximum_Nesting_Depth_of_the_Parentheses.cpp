class Solution {
public:
    int maxDepth(string s) {
        int count=0, ans=0;
        for(char ch:s){
            if(ch=='('){
                count++;
                ans = max(ans,count);
            }else if(ch==')')
                count--;
        }
        return ans;
    }
};
// Title: Maximum Nesting Depth of the Parentheses
