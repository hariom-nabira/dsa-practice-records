class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        sort(nums.begin(),nums.end(), [&](const int &a, const int &b){
            if(freq[a]==freq[b]){
                return a>b;
            }
            return freq[a]<freq[b];
        });
        return nums;
    }
};