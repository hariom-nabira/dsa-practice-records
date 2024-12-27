class Solution {
public:
    void insert_st(stack<int> &st, int &e){
        if(st.empty() || (st.top()>0 == e>0)){
            st.push(e); 
            return;
        }
        int tt = st.top();
        st.pop();
        if(abs(tt) > abs(e)){
            insert_st(st, tt);
        }else if(abs(tt) < abs(e)){
            insert_st(st, e);
        }
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int &e : asteroids){
            insert_st(st,e);
        }
        vector<int> result;
        while(!st.empty()){
            result.insert(result.begin(), st.top());
            // result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};
// Title: Asteroid Collision
