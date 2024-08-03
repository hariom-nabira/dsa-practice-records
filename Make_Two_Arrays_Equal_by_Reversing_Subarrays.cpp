class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=target.size();
        vector<int> freq(101);
        for(int i=0;i<n;i++) freq[arr[i]]++;
        for(int i=0;i<n;i++) freq[target[i]]--;
        for(int i=0;i<101;i++) if(freq[i]!=0) return false;
        return true;
    }
};
// Title: Make Two Arrays Equal by Reversing Subarrays
