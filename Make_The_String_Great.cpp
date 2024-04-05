class Solution {
public:
    string makeGood(string s) {
        string res;
        stack<char> st;
        for(char ch : s){
            if(!st.empty() && abs(ch-st.top())==('a'-'A'))
                    st.pop();
            else
                st.push(ch);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};