class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        vector<pair<int,string>> v;
        for(int i=0;i<n;i++){
            v.push_back({heights[i],names[i]});
        }
        sort(v.begin(),v.end(),[&](auto &p1,auto &p2){
            return p1.first>p2.first;
        });
        for(int i=0;i<n;i++){
            names[i] = v[i].second;
        }
        return names;
    }
};
// Title: Sort the People
