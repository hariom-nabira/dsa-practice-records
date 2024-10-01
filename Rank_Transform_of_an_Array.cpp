class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({arr[i],i});
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cout<<a[i].first<<" "<<a[i].second<<"\n";
        }
        int rank=1,i=0;
        vector<int> ans(n);
        while(i<n){
            int val = a[i].first;
            while(i<n && a[i].first == val){
                ans[a[i].second] = rank;
                i++;
            }
            rank++;
        }
        return ans;
    }
};
        // return {};
// , [&](pair<int,int> &a, pair<int,int> &b){
//             return a.first >= b.first;
//         }
// Title: Rank Transform of an Array
