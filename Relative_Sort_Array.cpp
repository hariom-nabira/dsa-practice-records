class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001);
        for(auto &ele:arr1)
            freq[ele]++;
        vector<int> ans;
        for(auto &ele : arr2){
            while(freq[ele]){
                freq[ele]--;
                ans.push_back(ele);
            }
        }
        for(int i=1;i<=1000;i++){
            while(freq[i]){
                freq[i]--;
                ans.push_back(i);
            }
        }
        return ans;
    }
};
// Title: Relative Sort Array
