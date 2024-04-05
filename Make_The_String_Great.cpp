class Solution {
public:
    string makeGood(string s) {
        string res;
        stack<char> st;
        for(char ch : s){
            if(!st.empty()){
                if(islower(ch) && st.top()==toupper(ch))
                    st.pop();
                else if(isupper(ch) && st.top()==tolower(ch))
                    st.pop();
                else
                    st.push(ch);
            }else
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